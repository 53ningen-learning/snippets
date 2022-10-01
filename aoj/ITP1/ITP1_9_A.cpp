#include <iostream>
#include <cctype>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;

int main()
{
    string w, t;
    cin >> w;
    string W = boost::to_upper_copy(w);
    int sum = 0;
    while (cin >> t)
    {
        if (t == "END_OF_TEXT")
        {
            break;
        }
        string T = boost::to_upper_copy(t);
        if (T == W)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
