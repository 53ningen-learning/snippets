#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

char BALLS[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char compare(int i, int j)
{
    char ans;
    cout << "? " << BALLS[i] << " " << BALLS[j] << endl;
    cin >> ans;
    return ans;
}

int main()
{
    int N = 3;
    int Q = 10;
    char buf;
    while (true)
    {
        bool changed = false;
        for (int i = 0; i < N - 1; i++)
        {
            if (compare(i, i + 1) == '>')
            {
                buf = BALLS[i];
                BALLS[i] = BALLS[i + 1];
                BALLS[i + 1] = buf;
                changed = true;
            }
        }
        if (!changed)
        {
            break;
        }
    }
    cout << "!";
    for (int i = 0; i < N; i++)
    {
        cout << " " << BALLS[i];
    }
    cout << endl;

    return 0;
}
