int rain=5;
int buzer = 6;
int rainstate=0;

void setup() {
  
  pinMode(buzer,OUTPUT);
  
pinMode(rain,INPUT);
} 

void loop() {
  
  rainstate=digitalRead(rain);
  
  if(rainstate==HIGH) {
    
    digitalWrite(buzer,HIGH);
  } else {
    
    digitalWrite(buzer,LOW);
  }
}
  
  