#include "main.h"

void Intake::run(bool reverse){
    intakeMotor.move_voltage(reverse ? -12000 : 12000);
}

void Intake::coast(){
    intakeMotor.move_voltage(0);
}

void Intake::control(){
    if(controller.get_digital(DIGITAL_R1)){
		Intake::run();
	}
	else if(controller.get_digital(DIGITAL_R2)){
		Intake::run(true);
	}
	else{
		Intake::coast();
	}
}