# 使用PWM进行LED灯渐变

PWM一般指脉冲宽度调制，通过控制一个周期内高电平的脉冲宽度，可以达到一些想要达到的效果，如控制LED灯的亮度，控制舵机的角度等应用，下面将通过介绍LED灯的渐变讲解PWM的使用。



### 知识点普及

[PWM概念](https://blog.csdn.net/as480133937/article/details/103439546?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522163698714916780265492466%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=163698714916780265492466&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-103439546.first_rank_v2_pc_rank_v29&utm_term=pwm&spm=1018.2226.3001.4187)



### 快速上手

> 上手前如果不熟悉PWM波的概念可以先阅读上述关于PWM的知识点普及部分，也可以参考[太极创客视频教程](https://www.bilibili.com/video/BV164411J7GE?p=28)，笔者的程序是基于该程序上修改得来的，感谢太极创客的教程。



主程序

```c++
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
```

