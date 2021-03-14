// File:          f_up.cpp
// Date:
// Description:
// Author:
// Modifications:

// You may need to add webots include files such as
// <webots/DistanceSensor.hpp>, <webots/Motor.hpp>, etc.
// and/or to add some other includes
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <iostream>

#define timeStep 320
using namespace webots;
using namespace std;

int main(int argc, char **argv) {
 
  Robot *robot = new Robot();
  Motor *ArmLowerL = robot->getMotor("ArmLowerL");
  Motor *ArmLowerR = robot->getMotor("ArmLowerR");
  Motor *LegLowerL = robot->getMotor("LegLowerL");
  Motor *LegLowerR = robot->getMotor("LegLowerR");
  Motor *LegUpperL = robot->getMotor("LegUpperL");
  Motor *LegUpperR = robot->getMotor("LegUpperR");
  Motor *AnkleL = robot->getMotor("AnkleL");
  Motor *AnkleR = robot->getMotor("AnkleR");
  Motor *ShoulderL = robot->getMotor("ShoulderL");
  Motor *ShoulderR = robot->getMotor("ShoulderR");
  
 //int timeStep = (int)robot->getBasicTimeStep();
  double t = -1;
  
  while(robot->step(timeStep) != t){
    
    //G0
    ArmLowerL->setPosition(-2.04);
    ArmLowerR->setPosition(2.04);
    LegLowerL->setPosition(-1.13);
    LegLowerR->setPosition(-1.13);
    AnkleL->setPosition(1.42);
    AnkleR->setPosition(1.42);
    
    
    
   cout << robot->step(timeStep) << endl;
   t = 0;
  };

  t = -1;
  
  while(robot->step(timeStep) != t){
    
    //G1
    ShoulderL->setPosition(0.68);
    ShoulderR->setPosition(0.68);
     ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-1.13);
    LegLowerR->setPosition(-1.13);
    AnkleL->setPosition(1.42);
    AnkleR->setPosition(1.42);
   cout << robot->step(timeStep) << endl;
   t = 0;
  };
    t = -1;

while(robot->step(timeStep) != t){
    
    //G2
    ShoulderL->setPosition(1.3);
    ShoulderR->setPosition(1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-1.53);
    LegLowerR->setPosition(-1.53);
    LegUpperL->setPosition(2.15);
    LegUpperR->setPosition(2.15);
    AnkleL->setPosition(0.51);
    AnkleR->setPosition(0.51);
   cout << robot->step(timeStep) << endl;
   t = 0;
  };
   
      t = -1;

while(robot->step(timeStep) != t){
    
    //G3
    ShoulderL->setPosition(1.3);
    ShoulderR->setPosition(1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-1.53);
    LegLowerR->setPosition(-1.53);
    LegUpperL->setPosition(1.4);
    LegUpperR->setPosition(1.4);
    AnkleL->setPosition(0.51);
    AnkleR->setPosition(0.51);
   cout << robot->step(timeStep) << endl;
   t = 0;
  };
  
  t = -1;

while(robot->step(timeStep) != t){
    
    //G4
    ShoulderL->setPosition(1.3);
    ShoulderR->setPosition(1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-1.2);
    LegLowerR->setPosition(-1.2);
    LegUpperL->setPosition(0.9);
    LegUpperR->setPosition(0.9);
    AnkleL->setPosition(0.51);
    AnkleR->setPosition(0.51);
   cout << robot->step(timeStep) << endl;
   t++;
  };
 /* 
    t = -1;

while(robot->step(timeStep) != t){
    
    //G5
    ShoulderL->setPosition(1.3);
    ShoulderR->setPosition(1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-1);
    LegLowerR->setPosition(-1);
    LegUpperL->setPosition(0.85);
    LegUpperR->setPosition(0.85);
    AnkleL->setPosition(0.51);
    AnkleR->setPosition(0.51);
   cout << robot->step(timeStep) << endl;
   t++;
  };
  
    t = -1;

while(robot->step(timeStep) != t){
    
    //G6
    ShoulderL->setPosition(1.3);
    ShoulderR->setPosition(1.3);
    ArmLowerL->setPosition(0);
    ArmLowerR->setPosition(0);
    LegLowerL->setPosition(-0.8);
    LegLowerR->setPosition(-0.8);
    LegUpperL->setPosition(0.7);
    LegUpperR->setPosition(0.7);
    AnkleL->setPosition(0.51);
    AnkleR->setPosition(0.51);
   cout << robot->step(timeStep) << endl;
   t = 0;
  };*/
  delete robot;
  return 0;
}
