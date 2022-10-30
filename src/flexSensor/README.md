# flex-sensor弯曲传感器

弯曲传感器因为产生不同的弯曲角度而产生不同的阻值，下面介绍使用A0口接收模拟量的教程。



### 接线方式

| FLEX-SENSOR | Arduino |
| ----------- | ------- |
| AO          | A0      |
| VCC         | 5V      |
| GND         | GND     |
| DO          | 不接    |



### 快速上手



主程序

```c++
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
const int FLEX_PIN = A0; // 电压采集接口
// Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
const float VCC =5.0; // 模块供电电压，ADC参考电压为V
const float R_DIV =100000.0; // 分压电阻为100KΩ
// Upload the code, then try to adjust these values to more// accurately calculate bend degree.
const float STRAIGHT_RESISTANCE =37300.0; // 平直时的电阻值
const float BEND_RESISTANCE =90000.0; // 90度弯曲时的电阻值
void setup() 
{
  Serial.begin(9600);
  pinMode(FLEX_PIN, INPUT);
 }
void loop() 
{
  // Read the ADC, and calculate voltage and resistance from it
  int flexADC=analogRead(FLEX_PIN);
  float flexV=flexADC* VCC / 1024.0;
  float flexR= R_DIV * (VCC / flexV-1.0);
  Serial.println("Voltage: "+String(flexV) +" V");
  Serial.println("Resistance: "+String(flexR) +" ohms");
// Use the calculated resistance to estimate the sensor's// bend angle:
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,0, 90.0);
  Serial.println("Bend: "+String(angle) +" degrees");
  Serial.println();

  delay(500);
  }
```

