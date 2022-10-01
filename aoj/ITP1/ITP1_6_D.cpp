#include <iostream>
using namespace std;

void call()
{
    int n, m;
    cin >> n >> m;

    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m]{0};
    }
    int *b = new int[m]{0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j] * b[j];
        }
        cout << sum << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            delete[] a[i];
        }
    }
    if (a != 0)
    {
        delete[] a;
    }
    if (b != 0)
    {
        delete[] b;
    }
}

void call2()
{
    int n, m;
    cin >> n >> m;

    int a[100][100] = {{}};
    int b[100] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j] * b[j];
        }
        cout << sum << endl;
    }
}

int main()
{
    call();
    return 0;
}