# Arduino UNO R3 dev
README: [English]() | [中文]()

该仓库为笔者的Arduino在学习中的资料整理，网上有很多很不错的开源项目和资料，笔者做的只是把这些内容整合起来，希望可以对大家的学习有所帮助。



> 需要注意的是，在本文档中，笔者使用的芯片为Arduino UNO R3 改进版(中国特色版本)，R3改进版和原版的区别大家有兴趣可以查一下，两种控制器在实际开发中是没有区别的。



## 相关资料
- [arduino library](https://www.arduino.cc/reference/en/libraries/)

> arduino IDE官方库，Serial等常用的函数库都在这里有例程讲解，没有什么是比看官方的例程更有效的学习方法了！

- [太极创客](http://www.taichi-maker.com/)

> 学习arduino和esp8266都可以参考这个团队的资料，他们整理的十分全面，感谢你们！

- [arduino 硬件资料/原理图](http://www.taichi-maker.com/homepage/reference-index/arduino-hardware-refrence/arduino-uno/)

- [arduino数据手册pdf版本](https://gitee.com/zeeland/arduino-uno-r3/blob/master/doc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf)




## 入门指引

推荐从视频教程[太极创客b站入门教程](https://www.bilibili.com/video/BV164411J7GE?from=search&seid=7233181312177860307&spm_id_from=333.337.0.0)开始入门学起。



## 快速上手

如果你有一些项目可以根据现有的开源代码作为基础开发，那么你大可以将现有的例程进行修改，修改为自己需要的例程，**以下例程为笔者在太极创客基础和Arduino库的基础上改进得到的自己需要的demo，现将这些例程开源，希望对大家有所帮助。**


- [arduino控制舵机](https://gitee.com/zeeland/arduino-uno-r3/tree/master/src/Servo)
- [PWM控制LED亮度](https://gitee.com/zeeland/arduino-uno-r3/tree/master/src/PWM/%E5%9F%BA%E4%BA%8EPWM%E7%9A%84LED%E6%B8%90%E5%8F%98)
- [控制使用OLED1602](https://gitee.com/zeeland/arduino-uno-r3/tree/master/src/OLED1306/)

- [AS608指纹模块的使用](https://gitee.com/zeeland/arduino-uno-r3/tree/master/src/AS608)


## TODO

- [ ] 英文文档的编写
- [ ] 更多的demo
- [ ] 参与贡献相关md的完善


## Distribution

非常欢迎您贡献文档，我们鼓励开发者以各种方式参与文档反馈和贡献。您可以**对现有文档进行评价、简单更改、反馈文档质量问题、贡献您的原创内容**。

如果你也想对本项目做出贡献，那么你可以先把该项目进行`fork` 或者 `git clone`到本地（推荐先`fork` 到自己仓库，然后再`clone`到本地，在本地新建一个`your-branch`分支继承`main`分支进行操作编辑，在`your-branch`修改对应文档或代码，markdown的图片可以存放在`/doc/images/`下，修改完成后`commit`你的修改内容，然后把你`your-branch`分支下的修改内容`push`到你的github仓库，最后，在github的仓库中`New pull request`，提交你分支的修改内容至author的仓库，等待author进一步review，如果author`merge`了你的代码，即视为贡献代码！

> 需要注意的是，在大多数情况下，fork下来的main分支一般需要和author的main分支保持同步，这就要求你最好不要在main分支上随意改动。