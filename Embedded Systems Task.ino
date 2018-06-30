
const int ButtonPin = 2; //number of button pin
const int LED_Pin = 13; //number of LED pin
const int SensorPin = 0; //number of temprature sensor analog pin A0

void setup() {
pinMode(ButtonPin, INPUT); //initializing button pin as input pin
pinMode(LED_Pin, OUTPUT); //initializing LED pin as output pin
Serial.begin(9600); //opening serial port and setting data rate to 9600 bps
}

void swtch(int led, int button) {
  int state = digitalRead(button); //reading the state of the button pin
  if(state == HIGH) { //checking wheather the button is pressed
    Serial.print("Pressed"); 
    digitalWrite(led, HIGH); //turning the LED on
    Serial.print("LED is ON");
  }
  else {
    digitalWrite(led, LOW); //turning the LED off
    Serial.print("LED is OFF");
  }
}
void temp(int sensor) {
  int reading = analogRead(sensor); //reading sensor data from the sensor pin
  float TEMP = (reading * 1000 / 1023) /10; //calculating the actual temperature as the data recieved is voltage 
  Serial.print("Temperature is: ");
  Serial.print(TEMP);
  Serial.print(" Celsius");
  delay(3000);
}

void loop() {
  swtch(LED_Pin, ButtonPin);
  delay(1000);
  temp(SensorPin);
  delay(2000);
}
