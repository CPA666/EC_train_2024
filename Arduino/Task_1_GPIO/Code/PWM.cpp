int ledPin = 9; 



void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {


  for (int brightness = 0; brightness <= 255; brightness++) {

    analogWrite(ledPin, brightness);

    delay(2);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {

    analogWrite(ledPin, brightness);

    delay(2);
  }
}