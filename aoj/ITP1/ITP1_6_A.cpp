#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void call()
{
    int n;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {

        if (j < n - 1)
        {
            cout << a[n - j - 1] << " ";
        }
        else
        {
            cout << a[n - j - 1];
        }
    }
    cout << endl;
}

void call2()
{
    int n;
    cin >> n;

    int *p = 0;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[n - i - 1];
    }
    for (int j = 0; j < n; j++)
    {
        if (j == n - 1)
        {
            cout << p[j] << endl;
        }
        else
        {
            cout << p[j] << " ";
        }
    }
    if (p != 0)
    {
        delete p;
    }
}

int main()
{
    call2();
    return 0;
}
