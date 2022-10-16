#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return pow(x, 3) + x;
}

double tle(int N)
{
    // 47^3 + 47 = 103,870 なので 0 〜 47 までの範囲を 0.001 刻みで二分探索すればよさそう
    double left = 0.001;
    double right = 47;
    while (left < right)
    {
        double middle = (left + right) / 2;
        if (N <= f(middle))
        {
            right = middle;
        }
        else
        {
            left = middle + 0.001;
        }
    }
    return left;
}

double solve(int N)
{
    double left = 0.001;
    double right = 47;
    while (right - left > 0.001) //=> 精度をここで決められる
    {
        double middle = (left + right) / 2;
        if (N <= f(middle))
        {
            right = middle;
        }
        else
        {
            left = middle;
        }
    }
    return left;
}

int main()
{
    int N;
    cin >> N;

    cout << solve(N) << endl;
    return 0;
}
