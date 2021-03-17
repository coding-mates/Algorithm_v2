#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
    double r;
    cin >> r;
    printf("%.6lf\n", r * r * M_PI);
    printf("%.6lf\n", r * r * 2);
    return 0;
}
