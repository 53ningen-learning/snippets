#include <iostream>

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    printf("%f\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return 0;
}
