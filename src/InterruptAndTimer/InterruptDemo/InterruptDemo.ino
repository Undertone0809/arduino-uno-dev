/**
 * @brief The purpose of this demo is to show how to use interrupt.
 * @author https://github.com/Undertone0809/arduino-uno-dev by zeeland
 * @createTime 2022/11/11 23:24:24
 * @File InterruptDemo.ino
 */

int pinInterrupt = 2; // 接中断信号的引脚
 
void onTouch()
{
  Serial.println("[info] finger touch");   
}

void onLeave()
{
  Serial.println("[info] finger leave");
}
 
void setup()
{
  Serial.begin(9600);
  Serial.println("[info] begin to work");
 
  pinMode( pinInterrupt, INPUT);// 设置管脚为输入
   
  // Enable中断管脚, 中断服务程序为onTouch(), 监视引脚变化
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), onLeave, FALLING);
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), onTouch, RISING);
}
 
void loop()
{
  while(1);
}
