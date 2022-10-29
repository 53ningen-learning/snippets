// AC
#include <iostream>
#include <cmath>

using namespace std;

const int M = 998244353;
long long A, B, C, D, E, F;

// (ABC - DEF) % M = (ABC % M - DEF % M + M) % M
// ABC % M = ((AB % M) * (C % M)) % M
long long calc(long long A, long long B, long long C, long long D, long long E, long long F)
{
    long long left = ((((A % M) * (B % M)) % M) * (C % M)) % M;
    long long right = ((((D % M) * (E % M)) % M) * (F % M)) % M;
    long long ans = (left - right + M) % M;
    return ans;
}

long long calc2(long long A, long long B, long long C, long long D, long long E, long long F)
{
    long long left = (A % M) * (B % M) % M * (C % M) % M;
    long long right = (D % M) * (E % M) % M * (F % M) % M;
    long long ans = (left - right + M) % M;
    return ans;
}

int main()
{
    cout << (4 - 6) % 3 << endl;
    cin >> A >> B >> C >> D >> E >> F;
    cout << calc2(A, B, C, D, E, F) << endl;
    return 0;
}
