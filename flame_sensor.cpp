// C++ code
//
int buzzer_pin= A5;
int sense_pin= 1;
int status= 0;
void setup()
{
pinMode(buzzer_pin,OUTPUT);
pinMode(sense_pin,INPUT);  
}

void loop()
{
 delay(50);
 status=digitalRead(sense_pin); 
 if (status == 1)
 {
 analogWrite(buzzer_pin,1000);
 delay(300);
 analogWrite(buzzer_pin,0);
 delay(300);
 }
 else
 analogWrite(buzzer_pin,0); 
}
