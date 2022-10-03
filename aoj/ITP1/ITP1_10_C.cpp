#include <iostream>

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }

        int s[1000] = {};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            sum += s[i];
        }
        double m = (double)sum / (double)n;

        double dsum = 0;
        for (int i = 0; i < n; i++)
        {
            dsum += pow(s[i] - m, 2);
        }
        double d = dsum / (double)n;
        double sd = sqrt(d);
        printf("%f\n", sd);
    }
    return 0;
}
