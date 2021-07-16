/*----------------------------------------------- --------- 
  Program : EXAMPLE OF BADUSB WITH ATTINY85 
  Author : Fellipe Couto [ http://www.efeitonerd.com.br ] 
  Date : 22/04/2020 
  ---------- ----------------------------------------------*/ 
# include <DigiKeyboard.h> 
const  int delayKey = 300 ;
const  int delayLong = 3000 ;

void  setup () {
   //Sets board LED port 1 
  pinMode( 1 , OUTPUT);

  //Win + D
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  delay(delayKey);

  //Win + R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(delayKey);

  
  //DigiKeyboard.println( "cmd" ) command prompt ;
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  //Disables command echo 
  DigiKeyboard.println( "@echo off" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  //Clean screen 
  DigiKeyboard.println( "cls" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Full screen
  DigiKeyboard.sendKeyStroke(KEY_F11);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  //Text message 
  Writing( " COMPUTER ACCESS DONE!" );
  delay(delayLong);
  Writing( " VIEWING FILES..." );
  delay(delayLong);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Clean screen 
  DigiKeyboard.println( "cls" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  //List files 
  DigiKeyboard.println( "tree" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayLong);

  //Ctrl + c (ends the command in execution tree)
  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
  delay(delayKey);

  //Clean screen 
  DigiKeyboard.println( "cls" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);
  
  //Text message 
  Writing( " BEWARE OF UNKNOWN DEVICES ON USB!" );
  delay(delayLong);
  Writing( " ACCESS FINISHED." );
  delay(delayLong);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Close the command prompt 
  DigiKeyboard.println( "exit" );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(delayKey);

  //Win + L (Lock computer)
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);

  //Turn on the LED to indicate the script has ended 
  digitalWrite( 1 , HIGH);
}

void  loop () {
}

void  Writing (String txt) {
   int len = txt.length();
  for ( int i = 0 ; i < len; i++) {
    DigiKeyboard.print(txt.substring(i, i + 1 ));
    delay( 35 );
  }
}
