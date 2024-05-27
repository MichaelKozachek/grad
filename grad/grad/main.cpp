#include <iostream>
#include "grad.h"
#include "radian.h"
#include "angle.h"
using namespace std;

int main() {
    grad grObj(0);
    radian radObj((double)grObj);
    grObj.printGrad();
    cout << "Degrees: " << grObj.toDegrees() << endl;
    angle angObj(grObj);
    angObj.printAngle();
}