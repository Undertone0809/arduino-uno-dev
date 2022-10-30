/******************************************************************************
Flex_Sensor_Example.ino
Create a voltage divider circuit combining a flex sensor with a 100k resistor.
As the resistance of the flex sensor increases (meaning it's being bent), the
voltage at A0 should decrease.
Development environment specifics:
Arduino 1.6.7
******************************************************************************/
/* FLEX_Sensor数据采集
 * 目的:FLEX_Sensor数据采集
 * 作者:Zeeland
 * 最后修改时间:2021年11月16日 00:37:00
 * https://gitee.com/zeeland/projects
 */

#include <Servo.h>

// 数据定义
Servo myservo;  
const int FLEX_PIN = A0; // 电压采集接口
const float VCC =5.0; // 模块供电电压，ADC参考电压为V
const float R_DIV =100000.0; // 分压电阻为100KΩ
const float STRAIGHT_RESISTANCE =26500.0; // 平直时的电阻值
const float BEND_RESISTANCE =90000.0; // 90度弯曲时的电阻值

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(FLEX_PIN, INPUT);
}

void loop() {
  float angle = readData(); 
  rotateSpecificAngle(angle);
  delay(20);
}

//读取flex传感器的数据
float readData() {
  int flexADC=analogRead(FLEX_PIN);
  float flexV=flexADC* VCC / 1024.0;
  float flexR= R_DIV * (VCC / flexV-1.0);
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,0, 90.0);
  Serial.println("Bend: "+String(angle) +" degrees");
  Serial.println();
  return angle;
}

// 旋转到任意角度
void rotateSpecificAngle(float angle){
  angle = angle<0? -angle:angle;
  int temp =  (float)angle;
  myservo.write(temp);
  delay(15);
}
