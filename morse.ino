#define  a1 morse.dot()
#define  a2 morse.dash() 
#define  a3 break 
#include <Morse.h>
 Morse morse(13);
 
void setup()
{
  Serial.begin(9600);
}
char a;
void loop()
{
  if(Serial.available())
    a=Serial.read();
    switch(a){
        case '\n':
        case ' ':
            delay(1000);
            break;      
        case 'a':
            morse.dot();
            morse.dash();
            break;

        case 'b':
            morse.dash();
            morse.dot();
            morse.dot();
            morse.dot();
            break;
        case 'c':
            morse.dash();
            morse.dot();
            morse.dash();
            morse.dot();
            break;
        case 'd':
            morse.dash();
            morse.dot();
            morse.dot();
            break;
        case 'e':
            morse.dot();
            break;
        case 'f':
            morse.dot();
            morse.dot();
            morse.dash();
            morse.dot();
            break;
        case 'g':
            morse.dash();
            morse.dash();
            morse.dot();
            break;
        case 'h':
            morse.dot();
            morse.dot();
            morse.dot();
            morse.dot();
            break;
        case 'i':
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dash();
            break;
        case 'j':
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dash();
            break;
        case 'k':
            morse.dash();
            morse.dot();
            morse.dash();
            break;
        case 'l':
            morse.dot();
            morse.dash();
            morse.dot();
            morse.dot();
            break;
        case 'm':
            morse.dash();
            morse.dash();
            break;
        case 'n':
            morse.dash();
            morse.dot();
            break;
        case 'o':
            morse.dash();
            morse.dash();
            morse.dash();
            break;
        case 'p':
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dot();
            a3;
        case 'q':
            a2;a2;a1;a2;a3;   
        case 'r':
            a1;a2;a1;a3;
        case 's':
            a1;a1;a1;a3;
        case 't':
            a2;a3;
        case 'u':
            a1;a1;a2;a3;
        case 'v':
            a1;a1;a1;a2;a3;
        case 'w':
            a1;a2;a2;a3;
        case 'x':
            a2;a1;a1;a2;a3;
        case 'y':
            a2;a1;a2;a2;a3;
        case 'z':
            a2;a2;a1;a1;a3;
    }
}
