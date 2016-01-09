#ifndef DriveSideways_H
#define DriveSideways_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class DriveSideways: public Command {
public:
	DriveSideways();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
