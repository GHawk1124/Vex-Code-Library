const MAX_FORWARD_SPEED = 128.000;
const MAX_BACKWARD_SPEED = -127.000;
const OFF = 0;

void moveForward(float speed) {
  int convspeed = OFF;
  convspeed = speed / 100.000 * ;
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
  motor[port4] = convspeed;
  motor[port5] = convspeed;
}

void turnLeft(float speed) {
  int convspeed = 0;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = -convspeed;
  motor[port3] = convspeed;
  motor[port4] = -convspeed;
  motor[port5] = convspeed;
}

void turnRight(float speed) {
  int convspeed = 0;
  convspeed = speed / 100.000 * MAX_FORWARD_SPEED;
  motor[port2] = convspeed;
  motor[port3] = -convspeed;
  motor[port4] = convspeed;
  motor[port5] = -convspeed;
}

void wait(float seconds) {
  convseconds = floor(seconds * 1000.000);
  wait10Msec(convseconds);
}

void RunExtra() {
  motor[extra] = MAX_FORWARD_SPEED;
}

void nRunExtra() {
  motor[extra] = MAX_BACKWARD_SPEED;
}
