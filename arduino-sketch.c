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
  0,
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
  101,
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
int oldTest = HIGH;
int bits = 0;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pins as an input and enable the internal pull-up resistor
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
}

void loop() {
  //read the pushbutton value into a variable
  int newOne = digitalRead(2);
  int newTwo = digitalRead(3);
  int newThree = digitalRead(4);
  int newFour = digitalRead(5);
  int newFive = digitalRead(6);
  int newSix = digitalRead(7);
  int newTest = digitalRead(8);

  if (oldTest != newTest) {
    oldTest = newTest;
    if (newTest == LOW) {
      Serial.print(letters[bits]);
      bits = 0;
    }
  }

  if (oldOne != newOne) {
    oldOne = newOne;
    if (newOne == LOW) {
      bits |= 16;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }
  if (oldTwo != newTwo) {
    oldTwo = newTwo;
    if (newTwo == LOW) {
      bits |= 32;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }
  if (oldThree != newThree) {
    oldThree = newThree;
    if (newThree == LOW) {
      bits |= 1;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }
  if (oldFour != newFour) {
    oldFour = newFour;
    if (oldFour == LOW) {
      bits |= 2;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }
  if (oldFive != newFive) {
    oldFive = newFive;
    if (oldFive == LOW) {
      bits |= 4;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }
  if (oldSix != newSix) {
    oldSix = newSix;
    if (oldSix == LOW) {
      bits |= 8;
      // Serial.println(bits);
    } else {
      // Serial.println(letters[bits]);
      // bits = 0;
    }
  }

}
