#pragma config(Motor,  port2,           FR,            tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           BR,            tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           BL,            tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           FL,            tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           shooter1,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           shooter2,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           shooter3,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           shooter4,      tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// motors listed in clockwise direction
// open side of the robot is front
void drive(){
	int x, y, r;

	x = vexRT[Ch1];
	y = vexRT[Ch2];
	r = vexRT[Ch4];

	motor[FL] = - y - x - r;
	motor[FR] = + y - x - r;
	motor[BR] = + y + x - r;
	motor[BL] = - y + x - r;
}

void shooter(){
	if (vexRT[Btn5D]){
		motor[shooter1] = 60;
		motor[shooter2] = 60;
		motor[shooter3] = 60;
		motor[shooter4] = 60;
	}
	else{
		motor[shooter1] = 0;
		motor[shooter2] = 0;
		motor[shooter3] = 0;
		motor[shooter4] = 0;
	}
}

task main() {
	while (true) {
		drive();
		shooter();
		sleep(20);
	}

}
