#include <iostream>

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    double S, L, h;
    cin >> a >> b >> c;

    double theta = M_PI * c / 180;
    h = b * sin(theta);
    S = a * h / 2.0;
    L = a + b + sqrt(pow(h, 2) + pow(b * cos(theta) - a, 2));

    printf("%f\n%f\n%f\n", S, L, h);
    return 0;
}
