void setup()
{
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
char a;
void loop()
{
  if(Serial.available())
  {
    a=Serial.read();
  	switch(a)
    {
    	case '0':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,LOW);
      		digitalWrite(2,LOW);
      		digitalWrite(3,LOW);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;
      		
      	case '1':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,HIGH);
      		digitalWrite(2,LOW);
      		digitalWrite(3,LOW);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      		
      	case '2':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,LOW);
      		digitalWrite(2,HIGH);
      		digitalWrite(3,LOW);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      
      	case '3':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,HIGH);
      		digitalWrite(2,HIGH);
      		digitalWrite(3,LOW);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      	
      	case '4':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,LOW);
      		digitalWrite(2,LOW);
      		digitalWrite(3,HIGH);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      
      	case '5':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,HIGH);
      		digitalWrite(2,LOW);
      		digitalWrite(3,HIGH);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      
      	case '6':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,LOW);
      		digitalWrite(2,HIGH);
      		digitalWrite(3,HIGH);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      
     	case '7':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,HIGH);
      		digitalWrite(2,HIGH);
      		digitalWrite(3,HIGH);
      		digitalWrite(4,LOW);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;     
     	case '8':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,LOW);
      		digitalWrite(2,LOW);
      		digitalWrite(3,LOW);
      		digitalWrite(4,HIGH);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;      
      case '9':
      		digitalWrite(5,LOW);
      		delay(10);
      		digitalWrite(6,HIGH);
      		digitalWrite(2,LOW);
      		digitalWrite(3,LOW);
      		digitalWrite(4,HIGH);
      		delay(10);
      		digitalWrite(5,HIGH);
      		break;    
    	 defult:
     		  break;
    }
  }
}
