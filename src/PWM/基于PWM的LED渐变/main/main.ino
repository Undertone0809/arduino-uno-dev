/* 通过PWM控制LED亮度
 * 目的:该例程为以太网控制舵机的例程
 * 作者:Zeeland
 * 最后修改时间:2021年11月9日 18:33:34
 * https://gitee.com/zeeland/projects
 */
void setup() {
  pinMode(9,OUTPUT);
}

void loop() {
  for(int i=0;i<255;i++) {
    analogWrite(9,i); // 对9引脚输出，占空比 i/255
    delay(10);
  }
}
