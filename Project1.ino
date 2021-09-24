int sensorPin = A0;
int sensorVal;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  delay(100);
  if(sensorVal >= 255){
       digitalWrite(13, HIGH);
  } else {
    digitalWrite(13,LOW);
  }
  
}
