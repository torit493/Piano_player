//Mario main theme melody
int marioTheme_melody[] = {
  NOTE_E5, NOTE_E5, 0, NOTE_E5,
  0, NOTE_C5, NOTE_E5, 0,
  NOTE_G5, 0, 0, 0,
  NOTE_G4, 0, 0, 0,
 
  NOTE_C5, 0, 0, NOTE_G4,
  0, 0, NOTE_E4, 0,
  0, NOTE_A4, 0, NOTE_B4,
  0, NOTE_AS4, NOTE_A4, 0,
 
  NOTE_G4, NOTE_E5, NOTE_G5,
  NOTE_A5, 0, NOTE_F5, NOTE_G5,
  0, NOTE_E5, 0, NOTE_C5,
  NOTE_D5, NOTE_B4, 0, 0,
 
  NOTE_C5, 0, 0, NOTE_G4,
  0, 0, NOTE_E4, 0,
  0, NOTE_A4, 0, NOTE_B4,
  0, NOTE_AS4, NOTE_A4, 0,
 
  NOTE_G4, NOTE_E5, NOTE_G5,
  NOTE_A5, 0, NOTE_F5, NOTE_G5,
  0, NOTE_E5, 0, NOTE_C5,
  NOTE_D5, NOTE_B4, 0, 0
  };

//Mario main theme tempo
int marioTheme_tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 10, 8,
  12, 12, 12, 10,
 
  12, 12, 12, 12,
  12, 12, 12, 14,
  12, 12, 12, 12,
  12, 12, 12, 10,
 
  12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12
  };
int marioTheme_tempoReal[] = {
  250, 250, 250, 250,
  250, 250, 250, 250,
  250, 250, 300, 375,
  250, 250, 250, 300,

  250, 250, 250, 250,
  250, 250, 250, 250,
  250, 250, 250, 214,
  250, 250, 250, 300,
}

//Underworld melody
int marioUnderworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, 
  NOTE_DS4, NOTE_CS4, NOTE_DS4,
  NOTE_C4, NOTE_DS4,
  NOTE_D4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E4, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
  };

//Underwolrd tempo
int marioUnderworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
  };

int gameOver_melody[] = {
  NOTE_C5, 0, 0, 0, 
  NOTE_G4, 0, 0, 0,
  NOTE_E4,
  NOTE_A4, 0, NOTE_B4, 0, NOTE_A4,
  NOTE_GS4, NOTE_AS4, NOTE_GS4,
  NOTE_G4, NOTE_D4, NOTE_G4, 0, 0
  };
  
int gameOver_tempo[] = {
  5, 1, 1, 1, 
  5, 1, 1, 1,
  3,
  2, 4, 2, 4, 3,
  2, 2, 2,
  8, 10, 1, 1, 1
  };

double wariosGoldMine_tempoT[] = {
  //SIX
  8, 8, 
  8, 8,

  16/3, 16,
  8, 8,

  8, 8,
  8, 8,

  8, 16, 16,
  8, 8,

  4, 8, 8,

  16/3, 16,
  8, 8,

  8, 16, 16,
  8, 8,

  //SEVEN
  16/3, 16,
  8, 8,
  
  8, 8,
  8, 8,

  16/3, 16,
  8, 8,

  8, 16, 16,
  8, 8,

  8, 8, 
  8, 8,

  4, 4,
};

int wariosGoldMine_melodyT[] = {
  //SIX
  NOTE_G3, NOTE_G4, //0 OR NOTE_G3?
  NOTE_D4, NOTE_DS4,

  NOTE_B4, NOTE_A4,
  NOTE_B4, NOTE_C5,

  NOTE_G3, NOTE_D5,       //0 OR NOTE_G3?
  NOTE_B4, NOTE_G4,

  NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_A4, NOTE_C5,

  NOTE_D5, NOTE_D4, NOTE_A3,  //0 OR NOTE_A3?

  NOTE_E5, NOTE_E5,
  NOTE_C5, NOTE_E5,

  NOTE_G3, NOTE_D5, NOTE_C5,  //0 OR NOTE_G3?
  NOTE_D5, NOTE_B4,

  //SEVEN
  NOTE_C5, NOTE_C5,
  NOTE_A4, NOTE_C5,

  NOTE_B4, NOTE_C5,
  NOTE_CS5, NOTE_D5,

  NOTE_E5, NOTE_D5,
  NOTE_E5, NOTE_C5,

  NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_G5, NOTE_C6,

  NOTE_B5, NOTE_G5,
  NOTE_A5, NOTE_FS5,

  NOTE_G5, 0,
};

int wariosGoldMine_melody[] = {
  NOTE_D3, NOTE_E3, NOTE_G3, NOTE_D3, 
  NOTE_E3, NOTE_G3, NOTE_D3, NOTE_E3,
  
  NOTE_G3, NOTE_D3, NOTE_E3, NOTE_G3,
  NOTE_D3, NOTE_E3, NOTE_G3, 0,

  NOTE_D3, NOTE_E3, NOTE_G3, NOTE_D3,
  NOTE_E3, NOTE_G3, NOTE_AS3, NOTE_B3,
  
  NOTE_G3, NOTE_D3, NOTE_E3, NOTE_G3,
  NOTE_D3, NOTE_G3, NOTE_E3, 0,

  NOTE_D3, NOTE_E3, NOTE_G3, NOTE_D3,
  NOTE_E3, NOTE_G3, NOTE_D3, NOTE_E3,
  
  NOTE_G3, NOTE_D3, NOTE_AS3, NOTE_B3,
  NOTE_G3, NOTE_E3, NOTE_D3, NOTE_E3,

  NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_D4, NOTE_B3, NOTE_D4, NOTE_E4,
  
  NOTE_D4, NOTE_AS3, NOTE_B3, NOTE_D4,
  NOTE_B3, NOTE_G3, NOTE_E3, 0,

  //THREE
  NOTE_G4, NOTE_B4, NOTE_D5, NOTE_G5,
  
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_CS5,
  NOTE_B4, NOTE_E5,

  NOTE_D5, NOTE_D5, NOTE_CS5, 
  NOTE_D5, NOTE_B4,

  NOTE_G3, NOTE_G4, //0 OR NOTE_G3?
  NOTE_D4, NOTE_DS4,

  NOTE_E4, NOTE_E4, 
  NOTE_C4, NOTE_E4,

  NOTE_G3, NOTE_D4,       //0 OR NOTE_G3?
  NOTE_G4, NOTE_GS4,

  //FOUR
  NOTE_A4, NOTE_A4, NOTE_GS4,
  NOTE_A4, NOTE_CS5,

  NOTE_D5, NOTE_D4, NOTE_A3, //0 OR NOTE_A3?

  NOTE_E5, NOTE_E5, //DOUBLE NOTES
  NOTE_C5, NOTE_E5,

  NOTE_G3, NOTE_D5, NOTE_CS5, //0 OR NOTE_G3?
  NOTE_D5, NOTE_B4,

  NOTE_C5, NOTE_C5,
  NOTE_A4, NOTE_C5,

  NOTE_B4, NOTE_C5,
  NOTE_CS5, NOTE_D5,

  NOTE_E5, NOTE_E5, //DOUBLE NOTES
  NOTE_C5, NOTE_E5,

  //FIVE
  NOTE_G3, NOTE_D5, NOTE_CS5, //0 OR NOTE_G3
  NOTE_D5, NOTE_G5,

  NOTE_E5, NOTE_FS5,
  NOTE_G5, NOTE_GS5,

  NOTE_A5, NOTE_B5, NOTE_C6,
  NOTE_D6, 0, NOTE_A3,              //0 OR NOTE_A3

  NOTE_G4, NOTE_B4, NOTE_D5, NOTE_G5,
  
  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_CS5,
  NOTE_B4, NOTE_E5,

  NOTE_D5, NOTE_D5, NOTE_CS5, 
  NOTE_D5, NOTE_B4,

    //SIX
  NOTE_G3, NOTE_G4, //0 OR NOTE_G3?
  NOTE_D4, NOTE_DS4,

  NOTE_B4, NOTE_A4,
  NOTE_B4, NOTE_C5,

  NOTE_G3, NOTE_D5,       //0 OR NOTE_G3?
  NOTE_B4, NOTE_G4,

  NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_A4, NOTE_C5,

  NOTE_D5, NOTE_D4, NOTE_A3,  //0 OR NOTE_A3?

  NOTE_E5, NOTE_E5,
  NOTE_C5, NOTE_E5,

  NOTE_G3, NOTE_D5, NOTE_C5,  //0 OR NOTE_G3?
  NOTE_D5, NOTE_B4,

  //SEVEN
  NOTE_C5, NOTE_C5,
  NOTE_A4, NOTE_C5,

  NOTE_B4, NOTE_C5,
  NOTE_CS5, NOTE_D5,

  NOTE_E5, NOTE_D5,
  NOTE_E5, NOTE_C5,

  NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_G5, NOTE_C6,

  NOTE_B5, NOTE_G5,
  NOTE_A5, NOTE_FS5,

  NOTE_G5, 0,
  };
  
double wariosGoldMine_tempo[] = {
  // 1000 = whole, 500 = half, 250 = quarter, 125 = eigth, 62.5 = sixtenth
  16, 16, 16, 16, // =16th
  16, 16, 16, 16,
  
  16, 16, 16, 16,
  16, 16, 16, 16,

  16, 16, 16, 16,
  16, 16, 16, 16,

  16, 16, 16, 16,
  16, 16, 16, 16,

  16, 16, 16, 16,
  16, 16, 16, 16,

  16, 16, 16, 16,
  16, 16, 16, 16,

  63, 63. 63, 63,
  63, 63. 63, 63,
  
  63, 63. 63, 63,
  63, 63. 63, 63,  

  63, 63. 63, 63,
  63, 63. 63, 63,

  63, 63. 63, 63,
  63, 63. 63, 63,
  
  63, 63. 63, 63,
  63, 63. 63, 63,

  125, 63, 63,
  63, 63. 63, 63,

  63, 63. 63, 63,
  63, 63. 63, 63,
  
  8, 16, 16,
  16, 16, 16, 16,

  16, 16, 16, 16,
  16, 16, 16, 16,

  188, 63,
  125, 125,
  
  63, 63. 63, 63,
  125, 125,

  125, 63, 63,
  125, 125,

  125, 125,
  125, 125,

  188, 63,
  125, 125,

  125, 125,
  125, 125,

  125, 63, 63,
  125, 125,

  250, 63, 63,

  188, 63,
  125, 125,

  188, 63,
  125, 125,

  125, 125,
  125, 125,

  188, 63,
  125, 125,

  125, 63, 63,
  125, 125,

  188, 63,
  125, 125,

  188, 31, 31,
  63, 63, 125,

  188, 63,
  125, 125,

  63, 63, 63, 63,
  125, 125,

  63, 188, 188,
  63, 63,
  
  //THREE
  16/3, 16,
  8, 8,     //8th

  16, 16, 16, 16,
  8, 8,

  8, 16, 16, //STRANGE RYTHM?
  8, 8,
  
  8, 8, 
  8, 8,

  16/3, 16, 
  8, 8,

  8, 8, 
  8, 8,
 
  //FOUR
  8, 16, 16, //STRANGE RYTHM?
  8, 8,

  4, 8, 8,

  16/3, 16, 
  8, 8,

  8, 16, 16,
  8, 8,

  16/3, 16,
  8, 8,

  8, 8,
  8, 8,

  16/3, 16,
  8, 8,

  //FIVE
  8, 16, 16,
  8, 8,
  
  16/3, 16,  // STRANGE RYTHM??
  8, 8,

  16/3, 32, 32,
  16, 16, 8,

  16/3, 16,
  8, 8,

  16, 16, 16, 16,
  8, 8,

  8, 16, 16, //STRANGE RYTHM?
  8, 8,

  //SIX
  8, 8, 
  8, 8,

  16/3, 16,
  8, 8,

  8, 8,
  8, 8,

  8, 16, 16,
  8, 8,

  4, 8, 8,

  16/3, 16,
  8, 8,

  8, 16, 16,
  8, 8,

  //SEVEN
  16/3, 16,
  8, 8,
  
  8, 8,
  8, 8,

  188, 63,
  125, 125,

  125, 125,
  125, 125,

  188, 63,
  125, 125,

  
  
  16/3, 16,
  8, 8,

  8, 16, 16,
  8, 8,

  8, 8, 
  8, 8,

  4, 4,
  };

int hedwigsTheme_melody[] = {
  NOTE_B3,
  NOTE_E4, NOTE_G4, NOTE_FS4, 
  NOTE_E4, NOTE_B4, 
  NOTE_A4,
  NOTE_FS4,

  NOTE_E4, NOTE_G4, NOTE_FS4,
  NOTE_D4, NOTE_F4,
  NOTE_B3,
  NOTE_B3, NOTE_B3,
  NOTE_E4, NOTE_G4, NOTE_FS4,

  NOTE_E4, NOTE_B4, 
  NOTE_D5, NOTE_CS5, //D4 ELLER G4
  NOTE_C5, NOTE_A4, //C4 ELLER GS4
  NOTE_C5, NOTE_B4, NOTE_AS4, // C4 ELLER E4
  NOTE_AS3, NOTE_G4, 
  NOTE_E4
  };
  
double hedwigsTheme_tempo[] = {
  // 4 = THREE QUARTERS, 6 = HALF, 8 = THREE EIGTHS, 12 = QUARTER, 24 = EIGTH 
  12,
  8, 24, 12, 
  6, 12,
  4,
  4,
  
  8, 24, 12,
  6, 12,
  4,
  6, 12,
  8, 24, 12,

  6, 12,
  6, 12,
  6, 12,
  8, 24, 12,
  6, 12,
  3
  };

int gotTheme_melody[] = {
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,

  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,

  NOTE_G4, //EVT G3?? ELLER 2? USIKKER PÅ NUMMER (BASS KEY)
  NOTE_C4,
  NOTE_DS4, NOTE_F4, NOTE_G4,
  NOTE_C4, NOTE_DS4, NOTE_F4,

  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3,

  NOTE_F4, 
  NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_F4, //DS4 ELLER AS4
  NOTE_AS3, NOTE_DS4, NOTE_D4,
  
  NOTE_C4, NOTE_F3, NOTE_GS3, NOTE_AS3, //C4 ELLER GS4
  NOTE_C4, NOTE_F3, NOTE_GS3, NOTE_AS3,
  NOTE_C4, NOTE_F3, NOTE_GS3, NOTE_AS3, // SAMME
  NOTE_C4, NOTE_F3, NOTE_GS3,

  NOTE_G4, 
  NOTE_C4,
  NOTE_DS4, NOTE_F4, NOTE_G4,
  NOTE_C4, NOTE_DS4, NOTE_F4,

  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3, NOTE_C4,
  NOTE_D4, NOTE_G3, NOTE_AS3,

  NOTE_F4, 
  NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_F4, //DS4 ELLER ...
  NOTE_AS3, NOTE_DS4, NOTE_D4,

  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3, //C4 ELLER ...
  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3,
  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3, //ELLER ...
  NOTE_C4, NOTE_G3, NOTE_C4
  };
  
double gotTheme_tempo[] = {
  // 4 = THREE QUARTERS, 6 = HALF, 8 = THREE EIGTHS, 12 = QUARTER, 24 = EIGTH 
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,

  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,

  4,
  4,
  24, 24, 6,
  6, 24, 24,
  
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 12,
  
  4,
  4,
  24, 24, 6,
  6, 24, 24,

  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 12,

  4,
  4,
  24, 24,6,
  6, 24, 24,

  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 12,

  4,
  4,
  24, 24,6,
  6, 24, 24,

  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 12
};



double testTheme_tempo[] = {
  4,
  4,
  24, 24,6,
  6, 24, 24,

  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 24, 24,
  12, 12, 12,
};

int testTheme_melody[] = {
  NOTE_F4, 
  NOTE_AS3,
  NOTE_DS4, NOTE_D4, NOTE_F4, //DS4 ELLER ...
  NOTE_AS3, NOTE_DS4, NOTE_D4,

  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3, //C4 ELLER ...
  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3,
  NOTE_C4, NOTE_G3, NOTE_GS3, NOTE_AS3, //ELLER ...
  NOTE_C4, NOTE_G3, NOTE_C4
};



