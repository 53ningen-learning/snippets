#include <iostream>

using namespace std;

int a;
int b;
const int P = 1000000007;

/*
a^b % p =
(a % p) * (a^(b-1) % p) % p =
(a % p) * {a % p * (a^(b-2) % p)} % p =
...
= (a % p) * (a % p)
*/
long REmodApowB(long a, long b, long p)
{
    // 1 <= b <= 10^9 なので Stack Overflow してそう
    // ループに直してためす
    return b == 1 ? a % p : ((a % p) * REmodApowB(a, b - 1, p)) % p;
}

/*
a^1 % p = a % p
a^2 % p = {(a^1 % p) * a % p} % p
a^3 % p = {(a^2 % p) * a % p} % p
...
としたら TLE になった
*/
long tleModApowB(long a, long b, long p)
{
    int value = a;
    for (int i = 1; i < b; i++)
    {
        value = ((value % p) * (a % p)) % p;
    }
    return value;
}

int main()
{
    cin >> a >> b;
    cout << modApowB(a, b, P) << endl;
    return 0;
}
