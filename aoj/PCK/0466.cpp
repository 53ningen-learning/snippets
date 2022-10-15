#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    int ans = n % d == 0 ? n / d : n / d + 1;
    cout << ans << endl;
    return 0;
}