#include <iostream>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long A = N / 3;
    long B = N / 5;
    long C = N / 7;
    long AB = N / (3 * 5);
    long BC = N / (5 * 7);
    long CA = N / (7 * 3);
    long ABC = N / (3 * 5 * 7);
    long ans = A + B + C - AB - BC - CA + ABC;
    cout << ans << endl;
    return 0;
}
