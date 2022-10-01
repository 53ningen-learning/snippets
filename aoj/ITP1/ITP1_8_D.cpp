#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, p;
    cin >> s;
    cin >> p;

    string target = s + s;
    for (int i = 0; i < target.length() - p.length() + 1; i++)
    {
        if (target.substr(i, p.length()) == p)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
