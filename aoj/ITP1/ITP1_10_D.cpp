#include <iostream>

#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[1000], y[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> y[j];
    }

    double sp1 = 0.0;
    double sp2 = 0.0;
    double sp3 = 0.0;
    double spinf = 0.0;

    for (int i = 0; i < n; i++)
    {
        double p1 = abs((double)x[i] - (double)y[i]);
        sp1 += p1;
        sp2 += pow(p1, 2);
        sp3 += pow(p1, 3);
        spinf = p1 > spinf ? p1 : spinf;
    }
    printf("%f\n%f\n%f\n%f\n", sp1, sqrt(sp2), pow(sp3, 1.0 / 3.0), spinf);
    return 0;
}
