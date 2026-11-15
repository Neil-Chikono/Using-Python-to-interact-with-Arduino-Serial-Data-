const int pot1 = A0 ; 
const int pot2 = A1 ; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 

}

void loop() {
  // put your main code here, to run repeatedly:

int zoomValue = analogRead(pot1); 
int positionValue = analogRead(pot2); 

serial.print(zoomValue); 
serial.print(",");
serial.print(postionValue); 

delay(30); 


}
