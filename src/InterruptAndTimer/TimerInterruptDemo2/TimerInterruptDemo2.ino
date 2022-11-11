/**
 * @brief The purpose of this demo is to show Sets up PWM output on pin 9 
 *     with a 50% duty cycle, and attaches an interrupt that toggles digital
 *     pin 10 every half second.
 * @author https://github.com/Undertone0809/arduino-uno-dev by zeeland
 * @createTime 2022/11/11 23:24:24
 * @File TimerInterruptDemo2.ino
 */

#include <TimerOne.h>

void callback()
{
    static boolean output = HIGH;
    digitalWrite(13, output);  // 状态翻转
    output = !output;
}

void setup()
{
    pinMode(13, OUTPUT);
    Timer1.initialize(500000); // initialize timer1, and set a 1/2 second period
    Timer1.pwm(9, 512); // setup pwm on pin 9, 50% duty cycle
    Timer1.attachInterrupt(callback); // attaches callback() as a timer overflow interrupt
}

void loop()
{
    
}
