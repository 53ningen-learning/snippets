#include <iostream>
#include <cmath>

using namespace std;

int bin2dex(int bin)
{
    int len = log10(bin) + 1;
    int ans = 0;
    int n = bin;
    for (int i = len; i > 0; i--)
    {
        int div = pow(10, i - 1);
        ans += n / div * (1 << (i - 1));
        n = n % div;
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;

    cout << bin2dex(N) << endl;
    return 0;
}
