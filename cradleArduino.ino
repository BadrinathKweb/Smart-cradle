#include<Servo.h>
Servo myservo;
int pos = 0;

char data = 0; //Variable for storing received data
const int soundPin = A0;
int sensorpin=A5;
int sensorvalue;
int soundVal = 0;
void setup() 
{
  myservo.attach(9);

    Serial.begin(9600); //Sets the data rate in bits per second (baud) for serial data transmission
    pinMode(6, OUTPUT);
pinMode(8, OUTPUT);
pinMode(5,OUTPUT);
    pinMode (soundPin, INPUT);
    pinMode (sensorpin,INPUT);
    //Sets digital pin 13 as output pin
}
void loop()
{
  soundVal = analogRead(soundPin);
  sensorvalue =analogRead(sensorpin);
  // Serial.println("baby soothing value");
  // Serial.println(sensorvalue);
  if(sensorvalue<700)
  {
    Serial.println("baby needs to change the daiper");
    digitalWrite(5,HIGH);
    delay(1000);
  }
  
  else
  {
    digitalWrite(5,LOW);
  }
  
  if (soundVal < 100)
  {
  myservo.write(0);
  // Serial.println(soundVal);
  for(int i=0 ; i<=4 ; i+=1) {
    Serial.println("baby is crying");
  
  for(pos = 110; pos<=170 ; pos += 1)
{
  
  myservo.write(pos);
  delay(20);
}
for(pos = 170; pos>=110 ; pos -= 1)
{
  myservo.write(pos);
  delay(20);
}
  
for(pos = 110; pos>=90 ; pos -= 1)
{
  myservo.write(pos);
  delay(20);
}
 for(pos = 80; pos<=110 ; pos += 1)
{
  myservo.write(pos);
  delay(20);
}
//myservo.write(550);
//delay(500);
//myservo.write(30);


//myservo.writeMicroseconds(1000);
//delay(500);
//for(pos = -180; pos>=0 ; pos -= 1)
//{
// myservo.write(pos);
// delay(15);
//}
// myservo.write(30);
// delay(1000);
// myservo.write(120);
// delay(1000);
// //yservo.write(120);
// //delay(1000);
// myservo.write(30);
 
  }
  Serial.println("baby stoped crying");
  // Serial.println(soundVal);
  delay(2000);}

    if(Serial.available() > 0) // Send data only when you receive data:
    {
        data = Serial.read();   
        //Read the incoming data and store it into variable data
        // Serial.println(data); //Print Value inside data in Serial monitor
        // Serial.print("\n"); //New line 
        if(data == '1')
       { //Checks whether value of data is equal to 1 
       Serial.println("Activated automatic roation ");
     for(int i=0 ; i<=10 ; i+=1)
  {         
// for(pos =175; pos<=225; pos += 1)
//{
// myservo.write(pos);
// delay(15);
//}
//for(pos = 225; pos>=175 ; pos -= 1)
//{
// myservo.write(pos);
// delay(15);
//}
 for(pos = 110; pos<=170 ; pos += 1)
{
  myservo.write(pos);
  delay(20);
}        
for(pos = 170; pos>=110 ; pos -= 1)
{
  myservo.write(pos);
  delay(20);
}
  
for(pos = 110; pos>=90 ; pos -= 1)
{
  myservo.write(pos);
  delay(20);
}
 for(pos = 90; pos<=110 ; pos += 1)
{
  myservo.write(pos);
  delay(20);
}
  } } } }
