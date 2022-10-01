#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c[26] = {};
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                int n = isupper(s[i]) ? s[i] - 65 : s[i] - 97;
                c[n]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {

        char alp = i + 97;
        cout << alp << " : " << c[i] << endl;
    }
    return 0;
}
