#include "drive.h"
#include "vex.h"

using namespace vex;

void drive(){
    double a = 0, b = 0, c = 0, d = 0;
    a -= Controller1.Axis3.position(percent);
    b -= Controller1.Axis3.position(percent);
    c += Controller1.Axis4.position(percent);
    d += Controller1.Axis4.position(percent);
    

    if(Controller1.ButtonR2.pressing()){
      a += 25;
      b -= 25;
      c += 25;
      d -= 25;
    }

    if(Controller1.ButtonL2.pressing()){
      a -= 25;
      b += 25;
      c -= 25;
      d += 25;
    }

    if(Controller1.ButtonR1.pressing()){
      a += 10;
      b -= 10;
      c += 10;
      d -= 10;
    }

    if(Controller1.ButtonL1.pressing()){
      a -= 10;
      b += 10;
      c -= 10;
      d += 10;
    }

    MotorA.setVelocity(a, percent);
    MotorB.setVelocity(b, percent);
    MotorC.setVelocity(c, percent);
    MotorD.setVelocity(d, percent);
    vex::task::sleep(20);
}