#include<Servo.h>
#include<SoftwareSerial.h>
SoftwareSerial abc(2,13);
Servo mys1;
Servo mys2;
Servo mys3;
Servo mys4;
Servo mys5;
Servo mys6;
Servo mys7;
Servo mys8;
Servo mys9;
int motion=0;
void setup()
{
mys1.attach(3);
mys2.attach(4);
mys3.attach(5);
mys4.attach(6); 
mys5.attach(7);
mys6.attach(8);
mys7.attach(9);
mys8.attach(11);
mys9.attach(12);
Serial.begin(9600);
abc.begin(9600);
}

void loop() {
 if(abc.available()>0){
  motion=abc.read();
 
    int i;
    if(motion =='A'){
   mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
 for(int i=90;i>=38;i--)
    {
      mys2.write(i);
      Serial.println(i);
      delay(5);
    }  
   
    for(int i=90;i>=38;i--)
    {
      
      mys4.write(i);
      Serial.println(i);
      delay(5);
    }  
    for(int i=90;i<=142;i++)
    {
      mys6.write(i);
      Serial.println(i);
      delay(5);
    }  
      for(int i=90;i<=142;i++)
    {
      
      mys8.write(i);
      Serial.println(i);
      delay(5);
    }  
    }
     if(motion=='D'){ 

     mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
 for(int i=90;i>=38;i--)
    {
      
      mys8.write(i);
      Serial.println(i);
      delay(5);
    }  
     for(int i=90;i>=38;i--)
    {
      mys6.write(i);
      Serial.println(i);
      delay(5);
    }  
      
    for(int i=90;i<=142;i++)
    {
      
      mys4.write(i);
      Serial.println(i);
      delay(5);
    }  
   
     for(int i=90;i<=152;i++)
    {
      mys2.write(i);
      Serial.println(i);
      delay(5);
    }  
     }
       if(motion=='C'){
          mys1.write(90);
   mys3.write(90);
   mys5.write(90);
   mys7.write(90);
   mys2.write(90);
   mys4.write(90);
   mys6.write(90);
   mys8.write(90);
   mys9.write(90);
   for(int i=90;i<=120;i++)
   {
    mys1.write(i);
    Serial.println(i);
    delay(5);
    }
    for(int i=90;i<150;i++)
    {
      mys3.write(i);
      Serial.println(i);
      delay(5);
    }
     
    for(int i=90;i<=120;i++)
    {
      mys5.write(i);
      Serial.println(i);
      delay(5);
      }
    for(int i=90;i>=40;i--)
    {
      mys7.write(i);
      Serial.println(i);
      delay(5);
    
      
    }  
      for(int i=90;i<=120;i++)
   {
    mys9.write(i);
    Serial.println(i);
    delay(5);
   }
   
      delay(500);

        }
      if(motion=='F'){
       

    int i;
   mys1.write(90);
   mys3.write(90);
   mys5.write(90);
   mys7.write(90);
   mys2.write(90);
   mys4.write(90);
   mys6.write(90);
   mys8.write(90);
   mys9.write(90);
   
   for(int i=90;i>=40;i--)
   {
    mys1.write(i);
    Serial.println(i);
    delay(5);
    }
    for(int i=90;i<=150;i++)
    {
      mys3.write(i);
      Serial.println(i);
      delay(5);
    }
     for(int i=90;i<=60;i++)
    {
      mys5.write(i);
      Serial.println(i);
      delay(5);
      }
     
   
    for(int i=90;i>=50;i--)
    {
      mys7.write(i);
      Serial.println(i);
      delay(5);
      
    } 
      for(int i=90;i>=50;i--)
    {
      mys9.write(i);
      Serial.println(i);
      delay(5);
      
    } 
     
    
      delay(550);

    
 } 
  if(motion=='B'){  
   mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
   
    for(int i=90;i<=120;i++){
    mys1.write(i);
    Serial.println(i);
    delay(5);
    }
     
    for(int i=90;i>=60;i--){
      mys2.write(i);
      Serial.println(i);
      delay(5);
    }  
   
    for(int i=90;i<=120;i++){
      mys3.write(i);
      Serial.println(i);
      delay(5);
      }
    for(int i=90;i>=60;i--)
    {
      mys4.write(i);
      Serial.println(i);
      delay(5);
    }  
    
     for(int i=90;i<=120;i++){
      mys5.write(i);
      Serial.println(i);
      delay(5);
    }
    for(int i=90;i<=120;i++)
    {
      mys6.write(i);
      Serial.println(i);
      delay(5);
    }  
     
    for(int i=90;i>=60;i--){
      mys7.write(i);
      Serial.println(i);
      delay(5);
    }  
     
    for(int i=90;i<=120;i++){
      mys8.write(i);
      Serial.println(i);
      delay(5);
    }
      for(int i=90;i<=120;i++){
      mys9.write(i);
      Serial.println(i);
      delay(5);
    }
      
    delay(500);
}
 if(motion=='E'){
   mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
   
    for(int i=90;i>=60;i--){
    mys1.write(i);
    Serial.println(i);
    delay(5);
    }
     
    for(int i=90;i>=60;i--){
      mys2.write(i);
      Serial.println(i);
      delay(5);
    }  
   
    for(int i=90;i>=60;i--){
      mys3.write(i);
      Serial.println(i);
      delay(5);
      }
    for(int i=90;i>=60;i--)
    {
      mys4.write(i);
      Serial.println(i);
      delay(5);
    }  
    
     for(int i=90;i>=60;i--){
      mys5.write(i);
      Serial.println(i);
      delay(5);
    }
    for(int i=90;i<=120;i++)
    {
      mys6.write(i);
      Serial.println(i);
      delay(5);
    }  
     
    for(int i=90;i<=135;i++){
      mys7.write(i);
      Serial.println(i);
      delay(5);
    }  
     
    for(int i=90;i<=120;i++){
      mys8.write(i);
      Serial.println(i);
      delay(5);
    }
      for(int i=90;i>=60;i--){
      mys9.write(i);
      Serial.println(i);
      delay(5);
    }
      
    delay(500);
} 
if(motion=='J'){
 mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
   
 for(int i=90;i<=160;i++)
    {
      mys7.write(i);
      Serial.println(i);
      delay(5);
    }  
 /*  for(int i=90;i<=160;i++)
    {
      mys5.write(i);
      Serial.println(i);
      delay(5);
    }  */
    for(int i=90;i<=145;i++)
    {
      
      mys9.write(i);
      Serial.println(i);
      delay(5);
    }  
    for(int i=90;i<=160;i++)
    {
      mys4.write(i);
      Serial.println(i);
      delay(5);
    }  
      for(int i=90;i>=60;i--)
    {
      
      mys2.write(i);
      Serial.println(i);
      delay(5);
    }  
     for(int j=0;i<=7;i++)
    {//mys6.write(90);
      for(int i=90;i<=155;i++)
    {
      
      mys1.write(i);
      Serial.println(i);
      delay(10);
    }  
     for(int i=155;i>=90;i--)
    {
      
      mys1.write(i);
      Serial.println(i);
      delay(10);
    }  
    for(int i=90;i>=30;i--)
    {
      
      mys1.write(i);
      Serial.println(i);
      delay(10);
    }  
    }     
 }
  if(motion =='I'){
   mys1.write(90);
   mys2.write(90);
   mys3.write(90);
   mys4.write(90);
   mys5.write(90);
   mys6.write(90);
   mys7.write(90);
   mys8.write(90);
   mys9.write(90);
  }
 }
}
