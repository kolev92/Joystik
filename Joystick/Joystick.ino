int xValue = 0;
int yValue = 0; 
int bValue = 0;
int button = 9;
void setup()  
{ 
  Serial.begin(9600) ;
  pinMode(9,INPUT);  
} 

void loop() 
{ 
  xValue = analogRead(A0);  
  yValue = analogRead(A1);  
  bValue = digitalRead(8);  
  Serial.print(xValue,DEC);
  Serial.print(",");
  Serial.print(yValue,DEC);
  Serial.print(",");
  Serial.print(!bValue);
  Serial.print("\n");
  delay(10);  
}
