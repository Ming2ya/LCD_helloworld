/*
 * @Author: MIngya jin2899042558@163.com
 * @Date: 2024-05-05 23:00:42
 * @LastEditors: MIngya jin2899042558@163.com
 * @LastEditTime: 2024-05-13 20:09:33
 * @FilePath: \Codingc:\Users\ASUS\Documents\PlatformIO\Projects\LCD_HelloWorld\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
*/
#include<LiquidCrystal.h>
#include<Arduino.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(7,OUTPUT);
  analogWrite(7,10);
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print("JDJ");
  lcd.setCursor(4, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}



