#include <iostream>
using namespace std;

int main()
{
    int d1, m1, d2, m2;
    cin >> d1 >> m1 >> d2 >> m2;

    int actual = d1 * 10 + m1;
    int average = d2 * 10 + m2;

    if (actual >= 375)
    {
        cout << 2 << endl;
    }
    else if (actual >= average)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
