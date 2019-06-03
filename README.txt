# Vex-Code-Library
Code Library for Vex Summer camp at Red Mountain Robotics 6/3/19 - 6/8/19

Link in case anything is missing - https://github.com/GHawk1124/Vex-Code-Library.git

Github Page - https://github.com/GHawk1124/Vex-Code-Library

This library will allow for easy programming for an Autonomous and Driver Control situation without limiting its capabilities.

README - Make sure the file you compile to your robot is the "main.c" file to make sure all the dependencies are included. If you wish,
you may create more files and include them in your program. Use #include "foo.c" to include a file of your choice, assuming its in the same
directory as your other files.

main.c - This file is your main execution file. The code running your autonomous and driver control loops will not be present here, 
instead, the function Auton() or ****TeleOP will be run. The library is set up to do nothing until a button press occurs, 
the button press (7U) will start the autonomous code, then your teleOP loop will start.

library.c - This a read-only file containing easy use functions to help you code your robot. Documentation here and in the file will be included.

Auton.c - This is where you will put the functions from library.c to code your own autonomous. Of course you are encouraged to write your own functions
and experiment with creating your own code as well. 

TeleOP.c - This is where you the main loop for Driver Control is stored and where you can include your own driving methods. 
