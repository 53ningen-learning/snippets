#include <iostream>

using namespace std;

int tleGcd(int a, int b)
{
    int x = max(a, b);
    int y = min(a, b);
    for (int p = y; p > 1; p--)
    {
        if (x % p == 0 && y % p == 0)
        {
            return p;
        }
    }
    return 1;
}

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return max(a, b);
    }
    else
    {
        return gcd(max(a, b) % min(a, b), min(a, b));
    }
}

int main()
{
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    return 0;
}
