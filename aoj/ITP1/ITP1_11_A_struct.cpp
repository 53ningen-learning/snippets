#include <iostream>
#include <cmath>

using namespace std;

typedef int DiceIndex;

struct Dice
{
    DiceIndex x, y, z;

public:
    inline int top(int map[6])
    {
        return map[z - 1];
    }

    inline Dice roll(char op)
    {
        switch (op)
        {
        case 'N':
            return rollN();
        case 'E':
            return rollE();
        case 'S':
            return rollS();
        case 'W':
            return rollW();
        default:
            return {x, y, z};
        }
    }

private:
    Dice rollN()
    {
        return {7 - z, y, x};
    }

    Dice rollE()
    {
        return {x, z, 7 - y};
    }

    Dice rollS()
    {
        return {z, y, 7 - x};
    }

    Dice rollW()
    {
        return {x, 7 - z, y};
    }
};

int main()
{
    int m[6];
    string op;
    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5];
    cin >> op;

    Dice d = {2, 3, 1};
    for (int i = 0; i < (int)op.length(); i++)
    {
        d = d.roll(op[i]);
    }
    cout << d.top(m) << endl;
    return 0;
}
