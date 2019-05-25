const int MAX_FORWARD_SPEED = 128.000;
const int MAX_BACKWARD_SPEED = -127.000;
const int OFF = 0;

void wait(float seconds) {
  float convseconds = floor(seconds * 1000.000);
  wait10Msec(convseconds);
}

void moveForward(float speed, int numSeconds) {
  int convspeed = OFF;
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

void moveBackward(float speed, int numSeconds) {
  int convspeed = 0;
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

void moveLeft(float speed, int numSeconds) {
  int convspeed = 0;
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

void moveRight(float speed, int numSeconds) {
  int convspeed = 0;
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

void RunExtra() {
  motor[extra] = MAX_FORWARD_SPEED;
}

void nRunExtra() {
  motor[extra] = MAX_BACKWARD_SPEED;
}
