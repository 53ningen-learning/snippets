#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
    if (x == 2 || x == 3)
    {
        return true;
    }
    if (x % 2 == 0)
    {
        return false;
    }
    for (int p = 3; p <= sqrt(x); p = p + 2)
    {
        if (x % p == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int Q;
    int X[10009] = {};
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> X[i];
    }

    for (int i = 1; i <= Q; i++)
    {
        cout << (isPrime(X[i]) ? "Yes" : "No") << endl;
    }
    return 0;
}
