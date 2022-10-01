#include <iostream>

using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;

    int buf;
    int cell[101][101] = {};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> buf;
            cell[i][j] = buf;
            cell[i][c] += buf;
            cell[r][j] += buf;
        }
        cell[r][c] += cell[i][c];
    }

    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (j == 0)
            {
                cout << cell[i][j];
            }
            else
            {
                cout << " " << cell[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
