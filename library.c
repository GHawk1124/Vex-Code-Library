/*
 * Author: GHawk (Garrett Comes)
 * Purpose: To allow for easy use of dynamic robot movement.
 * Language:  C (Using RobotC Library)
 */

const int MAX_FORWARD_SPEED = 128.000;
const int MAX_BACKWARD_SPEED = -127.000;
const int OFF = 0;

 /*
 * This library will give access to basic functions to help
 * guide your robot. You can additionally write your own functions
 * to improve what your robot can do. Just make a new file and
 * follow the steps in the markdown file to include your new file
 * in "main.c"
 */

/* Converts a time in seconds to miliseconds */
void wait(float seconds) {
  /* Convert Seconds to tenths of MiliSeconds */
  float convseconds = floor(seconds * 1000.000);
  wait10Msec(convseconds);
}

/* Takes a Speed Percentage and Seconds Parameter */
void moveForward(float speed, float numSeconds) {
  int convspeed = OFF;
  /* Convert the Speed Value to a Percentage */
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = convspeed;
  motor[port3] = convspeed;
  motor[port4] = convspeed;
  motor[port5] = convspeed;
  wait(numSeconds);
  motor[port2] = 0;
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
}

/* Takes a Speed Percentage and Seconds Parameter */
void moveBackward(float speed, float numSeconds) {
  int convspeed = 0;
  /* Convert the Speed Value to a Percentage */
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = -convspeed;
  motor[port3] = -convspeed;
  motor[port4] = -convspeed;
  motor[port5] = -convspeed;
  wait(numSeconds);
  motor[port2] = 0;
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
}

/* Takes a Speed Percentage and Seconds Parameter */
void moveLeft(float speed, float numSeconds) {
  int convspeed = 0;
  /* Convert the Speed Value to a Percentage */
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = -convspeed;
  motor[port3] = convspeed;
  motor[port4] = -convspeed;
  motor[port5] = convspeed;
  wait(numSeconds);
  motor[port2] = 0;
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
}

/* Takes a Speed Percentage and Seconds Parameter */
void moveRight(float speed, float numSeconds) {
  int convspeed = 0;
  /* Convert the Speed Value to a Percentage */
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = convspeed;
  motor[port3] = -convspeed;
  motor[port4] = convspeed;
  motor[port5] = -convspeed;
  wait(numSeconds);
  motor[port2] = 0;
  motor[port3] = 0;
  motor[port4] = 0;
  motor[port5] = 0;
}

/* Takes a Speed Percentage and Seconds Parameter */
void RunExtra() {
  motor[extra] = MAX_FORWARD_SPEED;
}

/* Takes a Speed Percentage and Seconds Parameter */
void nRunExtra() {
  motor[extra] = MAX_BACKWARD_SPEED;
}
