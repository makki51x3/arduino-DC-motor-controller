int state; 
void setup() { 
  Serial.begin(9600); 
  pinMode(A1,INPUT); 
  pinMode(5,OUTPUT); 
} 

void loop() { 
  if(Serial.available()>0){ 
    int x=Serial.read(); 
    switch(x){
      case 'a': 
      state=0; 
      Serial.println("state is 0"); 
      break; 
      
      case 'b': 
      state=1; 
      Serial.println("state is 1"); 
      break; 
      }
      } 
  if(state==0){ 
    digitalWrite(5,LOW); 
    Serial.println("motor is off"); 
    } 
    
  if(state==1){ 
    analogWrite(5,analogRead(A1)/4); 
    Serial.println("motor is reading"); 
    } 
}
