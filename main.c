#pragma config(Motor, port2, LEFT1, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port3, RIGHT1, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port4, LEFT2, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port5, RIGHT2, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port6, extra, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port7, extra2, tmotorVex393_MC29, openLoop)
#pragma config(Motor, port8, extra3, tmotorVex393_MC29, openLoop)

#include "Auton.c"
#include "TeleOP.c"

bool endAuton = false;

/* Main Compiled Program for the Robot */
/* MAKE SURE THIS IS THE FILE THAT IS COMPILED TO THE ROBOT */

task main() {

	while (endAuton == false) {
		if (vexRT[Btn7U]) { // Change the button to start your autonomous here
			Auton(); // Sources from Auton.c
			endAuton = true;
		}
	}

  tankTeleOP(); // Replace This With Your Own TeleOP function from TELEOP.c

}
