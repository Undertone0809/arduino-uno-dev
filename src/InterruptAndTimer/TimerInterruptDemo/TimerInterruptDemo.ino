/**
 * @brief The purpose of this demo is to show how to toggle LED on pin 13 each second.
 * @author https://github.com/Undertone0809/arduino-uno-dev by zeeland
 * @createTime 2022/11/11 23:24:24
 * @File TimerInterruptDemo.ino
 */

#include <MsTimer2.h>

void flash() {
  static boolean output = HIGH;
  digitalWrite(13, output);
  output = !output;
}

void setup() {
  pinMode(13, OUTPUT);
  MsTimer2::set(500, flash); // 500ms period
  MsTimer2::start();  // enables the interrupt.
  // MsTimer2::stop();  // disables the interrupt.
}

void loop() {
}
