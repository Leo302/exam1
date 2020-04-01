#include "mbed.h"
#include "uLCD_4DGL.h"

PwmOut PWM1(D6);
AnalogIn Ain(A0);
uLCD_4DGL uLCD(D1, D0, D2);

int main()

{
      uLCD.printf("\n106061155\n"); //Default Green on black text
      uLCD.line(0, 0 , 0, 100, 0xFFFFFF);
      uLCD.line(0, 0 , 100, 0, 0xFFFFFF);
      uLCD.line(0, 100 , 0, 0, 0xFFFFFF);
      uLCD.line(100, 0 , 0, 0, 0xFFFFFF);
      uLCD.line(100, 0 , 100, -100, 0xFFFFFF);
      uLCD.line(100, 0 , -100, -100, 0xFFFFFF);
      uLCD.line(0, -100 ,100 , -100, 0xFFFFFF);
      uLCD.line(0, -100 , -100, 100, 0xFFFFFF);
      while(1){
            PWM1.period(0.001);
            PWM1 = Ain;
            wait(0.1);
      }
}
      