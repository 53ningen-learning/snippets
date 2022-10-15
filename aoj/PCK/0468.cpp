#include <iostream>

using namespace std;

unsigned long fact(unsigned long n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n > 1 ? n * fact(n - 1) : n;
    }
}

int main()
{
    string str;
    cin >> str;

    int p = fact(str.length());
    int len = str.size();

    char t = '\0';
    int count = 1;
    for (int i = 0; i < len; i++)
    {
        if (str.at(i) == t)
        {
            count++;
            if (i == len - 1)
            {
                p = p / fact(count);
            }
        }
        else
        {
            p = p / fact(count);
            count = 1;
            t = str.at(i);
        }
    }
    cout << p << endl;
    return 0;
}
