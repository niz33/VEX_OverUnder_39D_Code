#include "main.h"
pros::Controller controller(CONTROLLER_MASTER);

//wheels
pros::Motor leftWheel1(10,true);
pros::Motor leftWheel2(9,true);
pros::Motor leftWheel3(8);
pros::Motor_Group leftWheels3{leftWheel1,leftWheel2,leftWheel3};
pros::Motor_Group leftwheels2{leftWheel1,leftWheel2};

pros::Motor rightWheel1(20);
pros::Motor rightWheel2(19);
pros::Motor rightWheel3(18,true);
pros::Motor_Group rightWheels3{rightWheel1,rightWheel2,rightWheel3};
pros::Motor_Group rightWheels2{rightWheel1,rightWheel2};

//catapult
pros::Motor catapultMotor(1);

//intake
pros::Motor intakeMotor(6);

//odometry wheel
pros::Rotation odometryWheel(7);

//wings
pros::ADIDigitalOut leftWing('A');
pros::ADIDigitalOut rightWing('B');

//pto
pros::ADIDigitalOut pto('C');