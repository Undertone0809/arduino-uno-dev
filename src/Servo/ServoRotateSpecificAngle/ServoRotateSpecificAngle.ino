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
