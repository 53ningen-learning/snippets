#include <iostream>
#include <vector>

using namespace std;

void solve(int N, int A[109])
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += A[i];
    }
    cout << sum << endl;
}

int main()
{
    int N;
    int A[109];
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    solve(N, A);
    return 0;
}
