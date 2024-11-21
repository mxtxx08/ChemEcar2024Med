//Definition

const byte Ldr = 4;
const byte Laser = 5;
const byte Motors = 6;

void setup() {
 pinMode(Ldr,INPUT);
 pinMode(Laser,OUTPUT);
 pinMode(Motors,OUTPUT);
 digitalWrite(Laser,HIGH); //Laser's always on.
}

void loop() {
 //LDR detecting the laser.
 if(digitalRead(Ldr)==LOW){
  digitalWrite(Motors,HIGH); // Turn motors on
 }
 //LDR no detecting the laser.
 else{
  delay(500);                // Time correction to brake
  digitalWrite(Motors,LOW);  // Turn motors on
 }
}
