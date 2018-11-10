#pragma config(Motor,  motor1,          leftWheel,     tmotorVexIQ, PIDControl, reversed, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightWheel,    tmotorVexIQ, PIDControl, driveRight, encoder)
#pragma config(Motor,  motor7,          leftArm,       tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor8,          rightArm,      tmotorVexIQ, PIDControl, reversed, encoder)


task main()
{
setMotor(leftArm, 100);
setMotor(rightArm, 100);
	wait10Msec(205);
setMotor(leftArm, 0);
setMotor(rightArm, 0);
setMotor(leftWheel, 100);
setMotor(rightWheel, 100);
	wait10Msec(300);
	stopAllMotors();
	setMotor(leftArm, -100);
setMotor(rightArm, -100);
	delay(10000);
}
