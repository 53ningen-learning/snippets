#include <iostream>
#include <cmath>

using namespace std;

// トウサ菌
// a1 = a0 + d => d = a1 - a0
// トウヒ菌
// a1 = a0 * r => r = a1 / a0

int main()
{
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;

    if (a2 - a1 == a1 - a0)
    {
        int d = a2 - a1;
        int a9 = a0 + 9 * d;
        cout << a9 << endl;
    }
    else
    {
        int r = a1 / a0;
        int a9 = a0 * pow(r, 9);
        cout << a9 << endl;
    }
    return 0;
}
