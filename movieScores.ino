#include "tunes.h"
#include "func.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(Speaker, OUTPUT);//buzzer
  pinMode(Led, OUTPUT);//led indicator when singing a note
  pinMode(Button1, INPUT);//for a button to select song 1
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);
}

void loop() {  
  if(digitalRead(Button1) == HIGH){  //sing the tunes
    play(3000, hedwigsTheme_melody, hedwigsTheme_tempo, sizeof(hedwigsTheme_melody)/sizeof(int));
  }
  if (digitalRead(Button2) == HIGH){
    play(1200, wariosGoldMine_melody, wariosGoldMine_tempo, sizeof(wariosGoldMine_melody)/sizeof(int));
  }
  if (digitalRead(Button3) == HIGH){
    play(3000, testTheme_melody, testTheme_tempo, sizeof(testTheme_melody)/sizeof(int));
  }
}
