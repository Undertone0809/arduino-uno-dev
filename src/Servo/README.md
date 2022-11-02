# arduino控制舵机(servo)

本教程将演示舵机的简单使用，包括如何使用舵机将其转动到特定的角度，如何使用串口通信控制舵机。

## Servo库介绍

通过Servo库，您可以用Arduino控制舵机（伺服电机）。常见的Arduino舵机有两种，一种舵机轴可以旋转180度，还有一种舵机轴可以连续旋转。这种舵机的旋转速度是可以控制的。

Servo库允许大多数Arduino开发板（如Arduino Uno）同时控制12个舵机。对于Arduino Mega，您可以用Servo库同时控制48个舵机。

请注意: 使用Servo库可能会影响Arduino开发板的某些引脚的PWM功能。

对于除Mega开发板以外的Arduino开发板，当您使用Servo库时，开发板的9号和10号引脚的PWM功能是无法使用的。也就是说，您的Arduino程序如果使用了Servo库，无论9号和10号引脚上是否连接了舵机，那么这两个引脚是不能使用analogWrite()语句进行控制的。

对于Mega开发板，使用12个以下的舵机是不会影响开发板的PWM功能的。但如果使用12个以上的舵机，那么Mega开发板上的引脚11和引脚12是要受到影响的。





## arduino连接舵机

舵机一般有3条引线，它们分别是电源线，接地线和信号线。**电源线一般是红色的。您可使用Arduino开发板的5V引脚为舵机供电。接地线通常是棕色或者黑色的，通常接地线是连接在Arduino开发板的接地引脚上的。信号线通常是桔红色，黄色或者是白色的。信号线通常是连接在Arduino开发板的数字输入输出引脚上的。**

请注意：通常舵机需要的供电功率比较高，如果您需要控制1个以上的舵机，那么您必须使用单独的电源为舵机供电，而不能使用Arduion开发板的+5V引脚，为1个以上的舵机供电。另外也请注意，如果使用独立电源为舵机供电，那么**独立电源与Arduino必须共地**（电源GND与Arduino的GND相互连接在一起）。

有关如何使用独立电源为多个舵机进行供电的详细资料，您可以通过太极创客团队制作的视频教程 – [串口通讯控制伺服电机/舵机(2)](http://www.taichi-maker.com/homepage/arduino-tutorial-index/mearm-index/mearm-6-serial-servo-2/) 获取到。



**接线方式**


| Arduino | SG90舵机  |
| ------- | --------- |
| 5V      | 红线      |
| GND     | 棕线/黑线 |
| PIN6    | 黄线      |



------

### SERVO库函数

- [attach()](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/servo-attach/)
- [write()](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/servo-write/)
- [read()](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/servo-read/)
- [attached()](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/servo-attached/)
- [detach()](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/servo-detach/)





### 快速上手

**串口输入转动特定的角度**

```c++
#include <Servo.h>
 
Servo myServo;         //创建Servo对象myServo
 
int dataIndex = 0;     //创建整数型变量，存储输入数据序列号
void setup() {
  myServo.attach(6);
  Serial.begin(9600); //启动串口通讯，传输波特率9600
  Serial.println("Please input serial data.");
}
 
void loop() {          // 检查串口缓存是否有数据等待传输 
  if ( Serial.available()>0 ) {  
    dataIndex++;       // 处理数据序列号并通过串口监视器显示
    Serial.print("dataIndex = ");
    Serial.print(dataIndex);
    Serial.print(" , ");      
    
    int pos = Serial.parseInt();   // 解析串口数据中的整数信息并赋值给变量pos
    Serial.print("Set servo position: ");
    Serial.println(pos);           // 通过串口监视器显示变量pos数值
    myServo.write(pos);             // 使用pos变量数值设置伺服电机
    delay(15);
  }
}
```



**转动特定角度（封装函数）**

```c++

//旋转特定角度，传入angle为需要旋转的角度，dir为方向
void rotateSpecificAngle(int angle,int dir){
  if(dir){
    for(pos = 0; pos < angle; pos += 1)  
    {         
       // 每次步进一度   
       // 指定舵机转向的角度                                        
      myservo.write(pos);
      // 等待15ms让舵机到达指定位置        
      delay(15);                       
    }  
  }else{
    for(pos = angle; pos>=1; pos-=1)   //从180度到0度运动  
    {                                
      myservo.write(pos);         // 指定舵机转向的角度
      delay(15);                        // 等待15ms让舵机到达指定位置
    }
  }
```

## 参考资料

- [通过 Servo库控制舵机视频教程](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/#tutorial)
- [SERVO库简介](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/#intro)
- [通过SERVO库控制舵机](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/#circuit)
- [SERVO库函数](http://www.taichi-maker.com/homepage/reference-index/arduino-library-index/servo-library/#function)



