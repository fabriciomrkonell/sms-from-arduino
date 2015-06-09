#include <SIM900.h>
#include <SoftwareSerial.h>
#include "sms.h"
SMSGSM sms;
boolean started=false;

void setup() 
{
  //Serial connection.
  Serial.begin(9600);
  Serial.println("GSM Shield testing.");

  if (gsm.begin(2400)){
    Serial.println("\nstatus=READY");
    started=true;  
  }
  else Serial.println("\nstatus=IDLE");
  
  if(started){
    if (sms.SendSMS("+55xx00xx00xx", "SMS from Arduino"))
      Serial.println("\nSMS sent OK");
  }

};


void loop() 
{
  Serial.println("EE");
}
