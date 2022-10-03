#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

#define DEBUG 0

class Dice
{
private:
    int x, y, z;

public:
    Dice(int _x = 2, int _y = 3, int _z = 1)
    {
        setValues(_x, _y, _z);
#if DEBUG
        printf("*init -> x: %d, y: %d, z: %d\n", x, y, z);
#endif
    }

    int top(int map[6])
    {
        return map[z - 1];
    }

    void roll(char op)
    {
        switch (op)
        {
        case 'N':
            rollN();
            break;
        case 'E':
            rollE();
            break;
        case 'S':
            rollS();
            break;
        case 'W':
            rollW();
            break;
        default:
            throw;
        }
    }

private:
    void setValues(int _x, int _y, int _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }

    void rollN()
    {
        setValues(7 - z, y, x);
#if DEBUG
        printf("rollN -> x: %d, y: %d, z: %d\n", x, y, z);
#endif
    }

    void rollE()
    {
        setValues(x, z, 7 - y);
#if DEBUG
        printf("rollE -> x: %d, y: %d, z: %d\n", x, y, z);
#endif
    }

    void rollS()
    {
        setValues(z, y, 7 - x);
#if DEBUG
        printf("rollS -> x: %d, y: %d, z: %d\n", x, y, z);
#endif
    }

    void rollW()
    {
        setValues(x, 7 - z, y);
#if DEBUG
        printf("rollW -> x: %d, y: %d, z: %d\n", x, y, z);
#endif
    }
};

int main()
{
    int m[6];
    string op;
    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5];
    cin >> op;

    Dice d = Dice();
    for (int i = 0; i < (int)op.length(); i++)
    {
        d.roll(op[i]);
    }
    cout << d.top(m) << endl;
    return 0;
}
