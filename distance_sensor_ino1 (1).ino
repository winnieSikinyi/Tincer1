const int pingPin = 6;
  
void setup(){
  Serial.begin(9600);
}

void loop(){
  long duration,inches,cm;
  
  pinMode(pingPin,OUTPUT);
  digitalWrite(pingPin,LOW);
  delayMicroseconds(9);
  
  digitalWrite(pingPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(pingPin,LOW);
 
  pinMode(pingPin,INPUT);
  duration = pulseIn(pingPin, HIGH);
  
  inches = duration/136;
  cm=inches *3.50;
  
  Serial.print(inches);
  Serial.print("in ");
  Serial.print(cm);
  Serial.print("cm");
  
  delay(0);
 
}
long microsecondsToInches(long microseconds){
  
  return microseconds /84 / 2;
}
long microsecondsToCentimeters(long microseconds){
return microseconds /29/2;

}



  
  
  
  
  
  
  
  
