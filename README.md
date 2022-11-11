# Arduino UNO R3 dev
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-3-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->
README: [English]() | [中文](./README.md)

- [Arduino UNO R3 dev](#arduino-uno-r3-dev)
  - [Introduction](#introduction)
  - [Example](#example)
  - [TODO](#todo)
  - [More](#more)
  - [Q\&A](#qa)
  - [How To Contribute?](#how-to-contribute)
  - [Contributors ✨](#contributors-)

>  开源不易，为项目点个star:star:吧！

## Introduction
该仓库为笔者的Arduino在学习中的资料整理，网上有很多很不错的开源项目和资料，笔者做的只是把这些内容整合起来，希望可以对大家的学习有所帮助。



> 需要注意的是，在本文档中，笔者使用的芯片为Arduino UNO R3 改进版(中国特色版本)，R3改进版和原版的区别大家有兴趣可以查一下，两种控制器在实际开发中是没有区别的。





## Example

如果你有一些项目可以根据现有的开源代码作为基础开发，那么你大可以将现有的例程进行修改，修改为自己需要的例程，**以下例程为笔者在各种开源的项目基础上改进得到的自己需要的demo，现将这些例程开源，希望对大家有所帮助。**

- [arduino控制简单舵机](./src/Servo)
- [定时器和中断的使用方式](./src/InterruptAndTimer/)
- [PWM控制LED亮度](./src/PWM/%E5%9F%BA%E4%BA%8EPWM%E7%9A%84LED%E6%B8%90%E5%8F%98)
- [控制使用OLED1602](./src/OLED1306/)

- [AS608指纹模块的使用](./src/AS608)


## TODO

- [ ] 英文文档的编写
- [ ] 更多的demo
- [ ] 参与贡献相关md的完善
- [ ] 丰富文档的内容
- [ ] 补充更多的Q&A
- [ ] 减少demo中的外链

## More


如果你想要学习更多的内容，你需要更多地实战、优质的学习资料和接触开源项目，以下是一些笔者学习arduino的一些参考。

- [Awesome-arduino](https://github.com/Lembed/Awesome-arduino) - 里面汇总了各种arduino的常用库、硬件资源以及开源项目，含金量极高

- [arduino library](https://www.arduino.cc/reference/en/libraries/) - arduino IDE官方库，Serial等常用的函数库都在这里有例程讲解，没有什么是比看官方的例程更有效的学习方法了！

- [太极创客](http://www.taichi-maker.com/) - 学习arduino和esp8266都可以参考这个团队的资料，他们整理的十分全面，感谢！

- [arduino 硬件资料/原理图](http://www.taichi-maker.com/homepage/reference-index/arduino-hardware-refrence/arduino-uno/)

- [arduino数据手册pdf版本](./doc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf)


## Q&A
1. 零基础小白怎么快速上手Arduino？
  
>   如果你是零基础的小白，我推荐从视频教程[太极创客b站入门教程](https://www.bilibili.com/video/BV164411J7GE?from=search&seid=7233181312177860307&spm_id_from=333.337.0.0)开始入门学起。


2. IDE该如何选择，用Arduino好还是platformio好？

> 对于新手来说，arduino IDE已经足够了，且大多数时候使用arduino IDE开发都是很舒服的。但是platformio编译速度很快，相关开源环境也比较完善，如果熟悉了使用platformio，你会再也不想用arduino IDE进行开发，但是用platformio需要科学上网，有的时候初始化要很久，真的很头疼！


3. 没有开源项目经历，我该如何参与贡献代码？

> 我们非常欢迎没有经验开源经验的小白在此贡献代码，TODO展示了该项目的一些待办事宜，我们非常欢迎大家参与TODO的贡献,详细可以参考[How To Contribute?](#how-to-contribute)


4. git commit message要怎么写？

> 参考[https://zhuanlan.zhihu.com/p/400870942](https://zhuanlan.zhihu.com/p/400870942)

## How To Contribute?

为了便于大家参与贡献，我将项目计划做了一些整理，主要参考[TODO](#todo),因为该项目为基础性项目，所以每个部分都比较容易参与进来，适合初入开源项目的小白，欢迎大家参与贡献。

不仅是TODO的部分，demo中的bug、文档修改、提issue，甚至是错别字的修改，都可以视为一次修改，不要小瞧自己的力量。[issue](https://github.com/Undertone0809/arduino-uno-dev/issues)中会存放一些当前存在的问题，欢迎大家解决问题提供pr，如果你发现了问题，也欢迎你提出issue！


如果你想对本项目做出贡献，提交**pr(pull request)**，那么你可以先把该项目进行`fork` 或者 `git clone`到本地（推荐先`fork` 到自己仓库，然后再`clone`到本地，在本地新建一个`your-branch`分支继承`main`分支进行操作编辑，在`your-branch`修改对应文档或代码，markdown的图片可以存放在`/doc/images/`下，修改完成后`commit`你的修改内容，然后把你`your-branch`分支下的修改内容`push`到你的github仓库，最后，在github的仓库中`New pull request`，提交你分支的修改内容至author的仓库，等待author进一步review，如果author`merge`了你的代码，即视为贡献代码！

> 需要注意的是，在大多数情况下，fork下来的main分支一般需要和author的main分支保持同步，这就要求你最好不要在main分支上随意改动。
## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tbody>
    <tr>
      <td align="center"><a href="https://github.com/Undertone0809"><img src="https://avatars.githubusercontent.com/u/72488598?v=4?s=100" width="100px;" alt="Zeeland"/><br /><sub><b>Zeeland</b></sub></a><br /><a href="https://github.com/Undertone0809/arduino-uno-dev/commits?author=Undertone0809" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/Reisen-C"><img src="https://avatars.githubusercontent.com/u/117102508?v=4?s=100" width="100px;" alt="Reisen-C"/><br /><sub><b>Reisen-C</b></sub></a><br /><a href="https://github.com/Undertone0809/arduino-uno-dev/commits?author=Reisen-C" title="Documentation">📖</a></td>
      <td align="center"><a href="https://github.com/wpjNB"><img src="https://avatars.githubusercontent.com/u/116938103?v=4?s=100" width="100px;" alt="wpjNB"/><br /><sub><b>wpjNB</b></sub></a><br /><a href="https://github.com/Undertone0809/arduino-uno-dev/commits?author=wpjNB" title="Documentation">📖</a></td>
    </tr>
  </tbody>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://github.com/all-contributors/all-contributors) specification. Contributions of any kind welcome!