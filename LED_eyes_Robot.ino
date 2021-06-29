const int LED = 13;
const int BUTTONon = 2;
const int BUTTONoff = 3;

void setup( ){
  pinMode(LED,OUTPUT);
  pinMode(BUTTONon,INPUT);
  pinMode(BUTTONoff,INPUT);
}

void loop(){
  if(digitalRead(BUTTONon) == HIGH){
    digitalWrite(LED,HIGH);
  }
    else if(digitalRead(BUTTONoff) == HIGH){
    digitalWrite(LED,LOW);
      }
}
