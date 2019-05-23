#pragma config(Motor,  port2,           LEFT1,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           RIGHT1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           LEFT2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           RIGHT2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           extra,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           extra2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           extra3,        tmotorVex393_MC29, openLoop)

const int MAX_FORWARD_SPEED = 128.000;
const int MAX_BACKWARD_SPEED = -127.000;
const int OFF = 0;

void moveForward(float speed) {
  int convspeed = OFF;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = convspeed;
  motor[port3] = convspeed;
  motor[port4] = convspeed;
  motor[port5] = convspeed;
}

void moveBackward(float speed) {
  int convspeed = 0;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = -convspeed;
  motor[port3] = -convspeed;
  motor[port4] = -convspeed;
  motor[port5] = -convspeed;
}

void moveLeft(float speed) {
  int convspeed = 0;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = -convspeed;
  motor[port3] = convspeed;
  motor[port4] = -convspeed;
  motor[port5] = convspeed;
}

void moveRight(float speed) {
  int convspeed = 0;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = convspeed;
  motor[port3] = -convspeed;
  motor[port4] = convspeed;
  motor[port5] = -convspeed;
}

void wait(float seconds) {
  float convseconds = floor(seconds * 1000.000);
  wait10Msec(convseconds);
}

void RunExtra() {
  motor[extra] = MAX_FORWARD_SPEED;
}

void nRunExtra() {
  motor[extra] = MAX_BACKWARD_SPEED;
}
