#include <iostream>
#include <cmath>

using namespace std;

typedef int DiceIndex;

struct Dice
{
    DiceIndex x, y, z;
};

int top(Dice d, int map[6])
{
    return map[d.z - 1];
}

Dice rollN(Dice d)
{
    return {7 - d.z, d.y, d.x};
}

Dice rollE(Dice d)
{
    return {d.x, d.z, 7 - d.y};
}

Dice rollS(Dice d)
{
    return {d.z, d.y, 7 - d.x};
}

Dice rollW(Dice d)
{
    return {d.x, 7 - d.z, d.y};
}

Dice roll(Dice dice, char direction)
{
    switch (direction)
    {
    case 'N':
        return rollN(dice);
    case 'E':
        return rollE(dice);
    case 'S':
        return rollS(dice);
    case 'W':
        return rollW(dice);
    default:
        return dice;
    }
}

int main()
{
    int m[6];
    string op;
    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5];
    cin >> op;

    Dice d = {2, 3, 1};
    for (int i = 0; i < (int)op.length(); i++)
    {
        d = roll(d, op[i]);
    }
    cout << top(d, m) << endl;
    return 0;
}
