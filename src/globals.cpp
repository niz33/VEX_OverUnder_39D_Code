#include "main.h"
pros::Controller controller(CONTROLLER_MASTER);

//wheels
pros::Motor leftWheel1(10,true);
pros::Motor leftWheel2(9,true);
pros::Motor_Group leftWheels{leftWheel1,leftWheel2};

pros::Motor rightWheel1(20);
pros::Motor rightWheel2(19);
pros::Motor_Group rightWheels{rightWheel1,rightWheel2};

//catapult
pros::Motor catapultMotor1(1);
pros::Motor catapultMotor2(2,true);
pros::Distance catapultDistanceSensor(2);
//intake
pros::Motor intakeMotor(6,true);

//odometry wheel
pros::Rotation leftOdometryWheel(4);
pros::Rotation rightOdometryWheel(5,true);
pros::Rotation backOdometryWheel(3);

//wings
pros::ADIDigitalOut wingsPneumatic('A');

//pto
pros::ADIDigitalOut pto('B');

//intake pneumatic
pros::ADIDigitalOut intakePneumatic('C');

//inertial sensor
pros::Imu inertial(3);

lemlib::Drivetrain_t drivetrain{
    &leftWheels,
    &rightWheels,
    12.0,
    3.25,
    1000.0/3.0,
};

lemlib::TrackingWheel leftTrackingWheel(&leftOdometryWheel, 4.0, 3.25);
lemlib::TrackingWheel rightTrackingWheel(&rightOdometryWheel, 4.0, -3.25);
lemlib::TrackingWheel backTrackingWheel(&backOdometryWheel, 4.0, 0.0);

lemlib::OdomSensors_t odomSensors{
    &leftTrackingWheel,
    &rightTrackingWheel,
    &backTrackingWheel,
    nullptr,
    &inertial
};


