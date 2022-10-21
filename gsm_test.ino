#include <SoftwareSerial.h>

SoftwareSerial SIM900A(2,3);




void setup()
{
 
  
  SIM900A.begin(9600);   // GSM Module Baud rate - communication speed 
  Serial.begin(9600);    // Baud rate of Serial Monitor in the IDE app
  Serial.println ("Text Messege Module Ready & Verified");
  delay(100);
  Serial.println ("Type s to send message or r to receive message");
   SendMessage(); 
}


void loop()
{


     
    
}


 void SendMessage()
{
  Serial.println ("Sending Message please wait....");
  SIM900A.println("AT+CMGF=1");    //Text Mode initialisation 
  delay(1000);
  Serial.println ("Set SMS Number");
  SIM900A.println("AT+CMGS=\"+916238922940\"\r"); // Receiver's Mobile Number
  delay(1000);
  Serial.println ("Set SMS Content");
  SIM900A.println("Animal is detected in your area ");// Messsage content
  delay(100);
  Serial.println ("Done");
  SIM900A.println((char)26);//   delay(1000);
  Serial.println ("Message sent succesfully");
}


 
