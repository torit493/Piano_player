
#define melodyPin 3
const int Speaker = 3;
const int Led = 13;
const int Button1 = 2;
const int Button2 = 4;
const int Button3 = 7;

int song1 = 0;
int song2 = 0;
int song3 = 0;

void doBlink(){
    digitalWrite(Led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(Led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
}

void play(double numinator, int note[], double beat[], int len){
   for (int thisNote = 0; thisNote < len; thisNote++) {
     int noteDuration = numinator / beat[thisNote];
   
     buzz(melodyPin, note[thisNote], noteDuration);
     delay(noteDuration*0.3);
   
     buzz(melodyPin, 0, noteDuration);
   }
}
