// File:          Test.cpp
// Date:
// Description:
// Author:
// Modifications:

// You may need to add webots include files such as
// <webots/DistanceSensor.hpp>, <webots/Motor.hpp>, etc.
// and/or to add some other includes
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <webots/PositionSensor.hpp>
#include <iostream>
#include <cmath>
// All the webots classes are defined in the "webots" namespace

#define TIME_STEP 32
using namespace webots;
using namespace std;
// This is the main program of your controller.
// It creates an instance of your Robot instance, launches its
// function(s) and destroys it at the end of the execution.
// Note that only one instance of Robot should be created in
// a controller program.
// The arguments of the main function can be specified by the
// "controllerArgs" field of the Robot node
int main(int argc, char **argv) {
  // create the Robot instance.
  Robot *robot = new Robot();
  
  PositionSensor *sensor = robot->getPositionSensor("Right_Arm_Shoulder_Position");
  sensor->enable(TIME_STEP);
  
  Motor *motor1 = robot->getMotor("Right_Arm_Shoulder");
  Motor *motor2 = robot->getMotor("Left_Arm_Shoulder");
 // int timeStep = (int)robot->getBasicTimeStep();
  const double F = 0.5;
  double t = 0.0;
  // You should insert a getDevice-like function in order to get the
  // instance of a device of the robot. Something like:
  //  Motor *motor = robot->getMotor("motorname");
  //  DistanceSensor *ds = robot->getDistanceSensor("dsname");
  //  ds->enable(timeStep);

  // Main loop:
  // - perform simulation steps until Webots is stopping the controller
  while (robot->step(TIME_STEP) != -1) {
    // Read the sensors:
    const double position = sin(t*2*M_PI*F);
    motor1->setPosition(position);
    motor2->setPosition(position);
    t += (double)TIME_STEP / 1000.0;
    // Enter here functions to read sensor data, like:
    //  double val = ds->getValue();
    const double value = sensor->getValue();
    // Process sensor data here.
    cout << "Sensor value is: " << value << endl;
    // Enter here functions to send actuator commands, like:
    //  motor->setPosition(10.0);
    
    
  };

  // Enter here exit cleanup code.

  delete robot;
  return 0;
}
