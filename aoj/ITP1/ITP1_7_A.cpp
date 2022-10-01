#include <iostream>
using namespace std;

int main()
{
    int m, f, r;

    while (true)
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }

        int sum = 0;
        sum += m == -1 ? 0 : m;
        sum += f == -1 ? 0 : f;

        if (m == -1 || f == -1)
        {
            cout << "F" << endl;
        }
        else if (sum >= 80)
        {
            cout << "A" << endl;
        }
        else if (sum >= 65)
        {
            cout << "B" << endl;
        }
        else if (sum >= 50)
        {
            cout << "C" << endl;
        }
        else if (sum >= 30)
        {
            if (r >= 50)
            {
                cout << "C" << endl;
            }
            else
            {
                cout << "D" << endl;
            }
        }
        else
        {
            cout << "F" << endl;
        }
    }
    return 0;
}
