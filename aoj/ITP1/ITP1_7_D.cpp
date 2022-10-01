#include <iostream>
using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    int a[100][100], b[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cin >> a[i][k];
        }
    }
    for (int k = 0; k < m; k++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> b[k][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            long sum = 0;
            for (int k = 0; k < m; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            if (j == 0)
            {
                cout << sum;
            }
            else
            {
                cout << " " << sum;
            }
        }
        cout << endl;
    }
    return 0;
}