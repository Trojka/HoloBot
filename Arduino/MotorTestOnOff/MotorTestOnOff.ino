const int buttonPin = 2;
const int motorPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(buttonPin);

  Serial.print("buttonState: ");
  Serial.print(buttonState);
  Serial.println();

  if(buttonState == HIGH)
  {
    digitalWrite(motorPin, HIGH);
  }
  else
  {
    digitalWrite(motorPin, LOW);
  }
}
