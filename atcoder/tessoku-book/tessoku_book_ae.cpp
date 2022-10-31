#include <iostream>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long ans = N / 3 + N / 5 - N / (3 * 5);
    cout << ans << endl;
    return 0;
}
