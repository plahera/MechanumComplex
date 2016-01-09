#include "DriveSideways.h"

DriveSideways::DriveSideways()
{
	// Use Requires() here to declare subsystem dependencies
}

// Called just before this Command runs the first time
void DriveSideways::Initialize()
{
	Robot::drive->Stop();
}

// Called repeatedly when this Command is scheduled to run
void DriveSideways::Execute()
{
	Robot::drive->DriveMethod(Robot::oi->GetDriveX(), 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveSideways::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveSideways::End()
{
	Robot::drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveSideways::Interrupted()
{
	Robot::drive->Stop();
}
