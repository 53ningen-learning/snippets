#include <iostream>
using namespace std;

void call(int n, int x)
{
    int count = 0;
    // nC3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {

                if (i < j && i < k && j < k && i + j + k == x)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}

void call2(int n, int x)
{
    int count = 0;
    // nC3
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {

                if (i + j + k == x)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
    int n, x;
    while (true)
    {
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }
        call2(n, x);
    }

    return 0;
}
