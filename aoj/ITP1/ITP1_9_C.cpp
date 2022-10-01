#include <iostream>
using namespace std;

int compare(string a, string b)
{
    if (a == b)
    {
        return 0;
    }
    int as = a.length();
    int bs = b.length();
    for (int i = 0; i < as && i < bs; i++)
    {
        if (a[i] != b[i])
        {
            return a[i] > b[i] ? 1 : -1;
        }
    }
    return a.length() > b.length() ? 1 : -1;
}

int main()
{
    int n;
    int score[2] = {};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string taro, hanako;
        cin >> taro >> hanako;

        switch (compare(taro, hanako))
        {
        case -1:
            score[1] += 3;
            break;
        case 0:
            score[0]++;
            score[1]++;
            break;
        case 1:
            score[0] += 3;
            break;
        default:
            break;
        }
    }
    cout << score[0] << " " << score[1] << endl;
    return 0;
}
