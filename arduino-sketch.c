char letters[63] = {0,108,
  107,
  47,
  106,
  59,
  112,
  8,
  102,
  0,
  0,
  118,
  0,
  116,
  114,
  0,
  100,
  0,
  0,
  99,
  0,
  103,
  101,
  0,
  113,
  111,
  105,
  0,
  117,
  0,
  0,
  0,
  115,
  32,
  0,
  120,
  0,
  98,
  119,
  13,
  97,
  110,
  104,
  0,
  121,
  0,
  0,
  0,
  122,
  46,
  44,
  0,
  109,
  0,
  0,
  0,
  9,
  0,
  0,
  0,
  0,
  0,
  0,
};


int oldOne = HIGH;
int oldTwo = HIGH;
int oldThree = HIGH;
int oldFour = HIGH;
int oldFive = HIGH;
int oldSix = HIGH;
int bits = 0;

int newOne;
int newTwo;
int newThree;
int newFour;
int newFive;
int newSix;

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 1;    // the debounce time; increase if the output flickers

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pins as an input and enable the internal pull-up resistor
  pinMode(5,INPUT_PULLUP);  // l
  pinMode(3,INPUT_PULLUP);  // k
  pinMode(2,INPUT_PULLUP);  // j
  pinMode(A5,INPUT_PULLUP); // f
  pinMode(A2,INPUT_PULLUP); // d
  pinMode(A0,INPUT_PULLUP); // s
}

void loop() {
  //read the pushbutton value into a variable
  int One = digitalRead(5);
  int Two = digitalRead(3);
  int Three = digitalRead(2);
  int Four = digitalRead(A5);
  int Five = digitalRead(A2);
  int Six = digitalRead(A0);


  if (oldOne != One) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (One != newOne) {
      newOne = One;
      if (newOne == LOW) {
        bits |= 1;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  if (oldTwo != Two) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (Two != newTwo) {
      newTwo = Two;
      if (newTwo == LOW) {
        bits |= 2;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  if (oldThree != Three) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (Three != newThree) {
      newThree = Three;
      if (newThree == LOW) {
        bits |= 4;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  if (oldFour != Four) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (Four != newFour) {
      newFour = Four;
      if (newFour == LOW) {
        bits |= 8;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  if (oldFive != Five) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (Five != newFive) {
      newFive = Five;
      if (newFive == LOW) {
        bits |= 16;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  if (oldSix != Six) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (Six != newSix) {
      newSix = Six;
      if (newSix == LOW) {
        bits |= 32;
      } else {
        if ( letters[bits] > 0 ) {
          Serial.println(letters[bits]);
        }
        bits = 0;
      }
    }
  }

  oldOne = One;
  oldTwo = Two;
  oldThree = Three;
  oldFour = Four;
  oldFive = Five;
  oldSix = Six;

}
