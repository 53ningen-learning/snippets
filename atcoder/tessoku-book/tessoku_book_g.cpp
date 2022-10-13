#include <iostream>

using namespace std;

void solve1()
{
    int D, N;
    cin >> D >> N;

    // O(N * D)
    int X[100001] = {};
    for (int i = 0; i < N; i++)
    {
        int L, R;
        cin >> L >> R;
        for (int j = L; j <= R; j++)
        {
            X[j]++;
        }
    }

    for (int i = 1; i <= D; i++)
    {
        cout << X[i] << endl;
    }
}

// O(N * 1)
void solve2()
{
    int D, N;
    cin >> D >> N;

    int X[100001] = {};
    for (int i = 0; i < N; i++)
    {
        int L, R;
        cin >> L >> R;
        X[L]++;
        X[R + 1]--;
    }

    for (int sum = 0, i = 1; i <= D; i++)
    {
        sum += X[i];
        cout << sum << endl;
    }
}

int main()
{
    solve2();
    return 0;
}
