/*
 * rosserial Servo Control Example
 *
 * This sketch demonstrates the control of hobby R/C servos
 * using ROS and the arduiono
 * 
 * For the full tutorial write up, visit
 * www.ros.org/wiki/rosserial_arduino_demos
 *
 * For more information on the Arduino Servo Library
 * Checkout :
 * http://www.arduino.cc/en/Reference/Servo
 */

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include <WProgram.h>
#endif

#include <Servo.h> 
#include <ros.h>
#include <std_msgs/UInt16.h>

ros::NodeHandle  nh;

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;
Servo servo_7;
Servo servo_8;
Servo servo_9;
Servo servo_10;

void servo_cb_1( const std_msgs::UInt16& cmd_msg){
  servo_1.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(13, HIGH-digitalRead(13));  //toggle led  
}

void servo_cb_2( const std_msgs::UInt16& cmd_msg){
  servo_2.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(14, HIGH-digitalRead(14));  //toggle led  
}

void servo_cb_3( const std_msgs::UInt16& cmd_msg){
  servo_3.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(15, HIGH-digitalRead(15));  //toggle led  
}

void servo_cb_4( const std_msgs::UInt16& cmd_msg){
  servo_4.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(16, HIGH-digitalRead(16));  //toggle led  
}

void servo_cb_5( const std_msgs::UInt16& cmd_msg){
  servo_5.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(17, HIGH-digitalRead(17));  //toggle led  
}

void servo_cb_6( const std_msgs::UInt16& cmd_msg){
  servo_6.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(18, HIGH-digitalRead(18));  //toggle led  
}

void servo_cb_7( const std_msgs::UInt16& cmd_msg){
  servo_7.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(19, HIGH-digitalRead(19));  //toggle led  
}

void servo_cb_8( const std_msgs::UInt16& cmd_msg){
  servo_8.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(20, HIGH-digitalRead(20));  //toggle led  
}

void servo_cb_9( const std_msgs::UInt16& cmd_msg){
  servo_9.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(21, HIGH-digitalRead(21));  //toggle led  
}

void servo_cb_10( const std_msgs::UInt16& cmd_msg){
  servo_10.write(cmd_msg.data); //set servo angle, should be from 0-180  
  digitalWrite(22, HIGH-digitalRead(22));  //toggle led  
}


ros::Subscriber<std_msgs::UInt16> sub_1("servo_1", servo_cb_1);
ros::Subscriber<std_msgs::UInt16> sub_2("servo_2", servo_cb_2);
ros::Subscriber<std_msgs::UInt16> sub_3("servo_3", servo_cb_3);
ros::Subscriber<std_msgs::UInt16> sub_4("servo_4", servo_cb_4);
ros::Subscriber<std_msgs::UInt16> sub_5("servo_5", servo_cb_5);
ros::Subscriber<std_msgs::UInt16> sub_6("servo_6", servo_cb_6);
ros::Subscriber<std_msgs::UInt16> sub_7("servo_7", servo_cb_7);
ros::Subscriber<std_msgs::UInt16> sub_8("servo_8", servo_cb_8);
ros::Subscriber<std_msgs::UInt16> sub_9("servo_9", servo_cb_9);
ros::Subscriber<std_msgs::UInt16> sub_10("servo_10", servo_cb_10);


void setup(){
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  
  

  nh.initNode();
  nh.subscribe(sub_1);
  nh.subscribe(sub_2);
  nh.subscribe(sub_3);
  nh.subscribe(sub_4);
  nh.subscribe(sub_5);
  nh.subscribe(sub_6);
  nh.subscribe(sub_7);
  nh.subscribe(sub_8);
  nh.subscribe(sub_9);
  nh.subscribe(sub_10);
  
  
  servo_1.attach(22); //attach it to pin 22
  servo_2.attach(23); //attach it to pin 23
  servo_3.attach(11); //attach it to pin 11
  servo_4.attach(10); //attach it to pin 12
  servo_5.attach(9); //attach it to pin 13
  servo_6.attach(14); //attach it to pin 14
  servo_7.attach(15); //attach it to pin 15
  servo_8.attach(16); //attach it to pin 16
  servo_9.attach(17); //attach it to pin 17
  servo_10.attach(21); //attach it to pin 18
  
}

void loop(){
  nh.spinOnce();
  delay(1);
}
