// File:          test_Motion_editor.cpp
// Date:
// Description:
// Author:
// Modifications:

// You may need to add webots include files such as
// <webots/DistanceSensor.hpp>, <webots/Motor.hpp>, etc.
// and/or to add some other includes
#include <webots/Robot.hpp>
#include <RobotisOp2MotionManager.hpp>

// All the webots classes are defined in the "webots" namespace
using namespace webots;
using namespace managers;

int main(int argc, char **argv) {
  
  Robot *robot = new Robot();

 
  int timeStep = (int)robot->getBasicTimeStep();

  mMotionManager = new RobotisOp2MotionManager(this);
  while (robot->step(timeStep) != -1) {
   
  };

 

  delete robot;
  return 0;
}
