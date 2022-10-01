#include <iostream>
#include <cctype>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string w;
        int m, h;
        cin >> w;
        if (w == "-")
        {
            break;
        }
        cin >> m;
        int s = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> h;
            s = (s + h) % w.length();
        }
        cout << w.substr(s, w.length() - s) + w.substr(0, s) << endl;
    }
    return 0;
}
