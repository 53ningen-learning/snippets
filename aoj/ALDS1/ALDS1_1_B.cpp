#include <iostream>
using namespace std;

void naive()
{
    int a, b;
    cin >> a >> b;

    int gcd = 1;
    int min = a < b ? a : b;
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd << endl;
}

// For integers x and y, if x ≥ y, then gcd(x, y) = gcd(y, x%y)
void smart()
{
    int a, b, o1, o2;
    cin >> a >> b;
    o1 = a >= b ? b : a;
    o2 = a >= b ? a % b : b % a;

    int gcd = 1;
    if (a == b)
    {
        gcd = a;
    }
    else
    {
        for (int i = o2; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
                break;
            }
        }
    }
    cout << gcd << endl;
}

int main()
{
    smart();
    return 0;
}
