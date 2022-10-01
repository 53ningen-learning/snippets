#include <iostream>
#include <stdio.h>

using namespace std;

const double PI = 3.141592653589;

int main()
{

    double r, s, c;
    cin >> r;

    s = r * r * PI;
    c = 2 * PI * r;

    printf("%f %f", s, c);
    return 0;
}
