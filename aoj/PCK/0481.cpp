#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int score = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        if (x != y)
        {
            switch (x)
            {
            case 0:
                score += y == 1 ? 1 : -1;
                break;
            case 1:
                score += y == 2 ? 1 : -1;
                break;
            case 2:
                score += y == 0 ? 1 : -1;
                break;
            default:
                break;
            }
        }
    }

    if (score == 0)
    {
        cout << -1 << endl;
    }
    else if (score > 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}
