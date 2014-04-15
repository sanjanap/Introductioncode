int led = 9;
int brightness = 255;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
}

void loop(){
  analogWrite(led,brightness);
  Serial.println("I'm setting the led to " + String(brightness,DEC));
}
