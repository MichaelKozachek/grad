#include "grad.h"
#include <iostream>
#include <cstdlib>

using namespace std;

const double PI = 3.141592;

grad::grad(int val) {
    gr = rand() % 400;
    grMin = rand() % 100;
    grSec = rand() % 100;
}

grad::grad(radian rad) {
    gr = rad * 200 / PI;
    grMin = rad * 20000 / PI - gr * 100;
    grSec = rad * 2000000 / PI - gr * 10000 - grMin * 100;
}

grad::operator radian() const {
    double r = gr * PI / 200 + grMin * PI / 20000 + grSec * PI / 2000000;
    return r;
}

grad::operator double() const {
    return gr + grMin / 60.0 + grSec / 3600.0;
}

double grad::toDegrees() const
{
    return gr + grMin / 60.0 + grSec / 3600.0;
}

void grad::printGrad() {
    cout << "Grad gr=" << this->gr << "\t min=" << this->grMin << "\t sec=" << this->grSec << std::endl;
}
