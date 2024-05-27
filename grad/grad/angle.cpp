#include "angle.h"
#include <iostream>
using namespace std;

angle::angle(int degrees, int minutes, int seconds) {
    deg = degrees;
    min = minutes;
    sec = seconds;
}

angle::angle(grad gr) {
    int total_seconds = gr * 3600;
    deg = total_seconds / 3600;
    min = (total_seconds % 3600) / 60;
    sec = total_seconds % 60;
}

angle::operator grad() const {
    return deg * 3600 + min * 60 + sec;
}

angle::operator double() const {
    return deg + min / 60.0 + sec / 3600.0;
}

void angle::printAngle() {
    cout << "Angle: " << deg << " degrees, " << min << " minutes, " << sec << " seconds" << endl;
}
