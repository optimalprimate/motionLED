const int relay_pin = 19;
const int ldr_pin = 0;
const int pir_pin = 10;
const int swi_pin = 11;
int led = 13;
boolean y=false;

void setup() {
pinMode(relay_pin,OUTPUT);
pinMode(swi_pin,INPUT);
pinMode(pir_pin,INPUT);
//pinMode(ldr_pin,INPUT);
Serial.begin(9600);
pinMode(led, OUTPUT); 
int x = 0;    
}
void loop() {

  digitalWrite(relay_pin,LOW);
  int pirval = digitalRead(pir_pin); 
  int ldrval = analogRead(ldr_pin);
  int swi = digitalRead(swi_pin);
  int touch = touchRead(16);
 
if(touch>1000){
  digitalWrite(relay_pin,HIGH);
 delay(180000);
}

if(pirval==1){
   if(ldrval<300){
    int x=1;
  while(x<30){
         digitalWrite(relay_pin,HIGH);
         int pirval = digitalRead(pir_pin);
             if(pirval==1){
              x=1;
              Serial.println("IF triggered, x = ");
              Serial.println(x);
              }
              else{
                x++;
              }
        delay(1000);
        Serial.println("Xval after add= ");
        Serial.println(x); 
        Serial.println("Pirval= ");
        Serial.println(pirval);
       }
   }
   }
   
if(swi==1){
  int x=1;
  while(x==1){
         digitalWrite(relay_pin,HIGH);
         int swi = digitalRead(swi_pin);
             if(swi==0){
              break;
             }   
  }
}
}
