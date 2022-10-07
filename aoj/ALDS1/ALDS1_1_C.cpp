#include <iostream>
#include <math.h>

using namespace std;

bool isPrimeNumber(int n)
{
    // n == 2 or 3 => 素数
    if (n == 2 || n == 3)
    {
        return true;
    }

    // 2. n % 2 => 素数でない
    if (n % 2 == 0)
    {
        return false;
    }

    // 3. n が 3 以上の奇数で割り切れる => 素数でない
    // n が素数でないと仮定すれば、整数 a, b (a <= b)を用いて n = a x b となる a, b が存在する
    // n が素数でないのであれば、2 から a がとりうる最大値: b までの間に n を割り切れる整数が存在する
    // a がとりうる最大値は n = b^2 => b = sqrt(n) ということになるため、結局 2 から sqrt(n) までの整数を探索すればよい
    // なおすでに前のステップで偶数を排除しているため 2 から sqrt(n) までの奇数を探索すればよいことになる
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    int count = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (isPrimeNumber(m))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
