#pragma config(Motor,  port2,           LEFT1,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           RIGHT1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           LEFT2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           RIGHT2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           extra,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           extra2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           extra3,        tmotorVex393_MC29, openLoop)

#include "library.c"

task teleOP() {
  /*
  *  This is the loop that runs the autonomous code.
  *  Be careful editing this as it may break your code.
  *  If you wish to leave the loop at any time to
  *  execute more code in your main file,
  *  Then add a parameter to the while loop such as "param = false", and put a
  *  condition inside the code that sets this value to true.
  */
  while (true) {
    motor[LEFT1] = vexRT[Ch3];
    motor[RIGHT1] = vexRT[Ch2];
    motor[LEFT2] = vexRT[ch3];
    motor[RIGHT2] = vexRT[ch3];
    if (vexRT[Btn6U]) {
      motor[extra2] = MAX_FORWARD_SPEED;
    } else if (vexRT[Btn6D]) {
       motor[extra2] = MAX_BACKWARD_SPEED;
    } else {
      motor[extra2] = OFF;
    }
    if (vexRT[Btn5U]) {
      motor[extra3] = MAX_FORWARD_SPEED;
    } else if (vexRT[Btn5D]) {
       motor[extra3] = MAX_BACKWARD_SPEED;
    } else {
      motor[extra3] = OFF;
    }
  }
}
