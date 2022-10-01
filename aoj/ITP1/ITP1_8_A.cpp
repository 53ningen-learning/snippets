#include <iostream>
#include <cctype>

using namespace std;

char toggle(char c)
{
    if (97 <= c && c <= 122)
    {
        return c - 32;
    }
    else if (65 <= c && c <= 90)
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}

/*
int isalpha(char ch): ch がアルファベットなら true を返す
int isdigit(char ch): ch が数字なら true を返す
int islower(char ch): ch が小文字なら true を返す
int isupper(char ch): ch が大文字なら true を返す
int tolower(char ch): ch の小文字を返す
int toupper(char ch): ch の大文字を返す
*/
char toggle2(char c)
{
    return isalpha(c) ? islower(c) ? toupper(c) : tolower(c) : c;
}

int main()
{
    bool flag = false;
    string s;
    while (cin >> s)
    {
        if (flag)
        {
            cout << " ";
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 0)
            {
                cout << endl;
                break;
            }
            cout << toggle2(s[i]);
        }
        flag = true;
    }
    cout << endl;
    return 0;
}