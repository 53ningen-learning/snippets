#include <iostream>

using namespace std;

#define DEBUG 0

int N, K;
int A[100009];

// TLE
int naive_solve(int N, int K, int A[100009])
{
    int t = 1;
    int sum = 0;
    while (true)
    {
        for (int i = 1; i <= N; i++)
        {
            sum += (t % A[i]) == 0 ? 1 : 0;
        }
        if (sum >= K)
        {
            break;
        }
        t++;
    }
    return t;
}

// AC
int solve(int N, int K, int A[100009])
{
    int start = 1;
    int end = 1000000000;

    while (start < end)
    {
        int time = (start + end) / 2;
        long long pages = 0;
        for (int i = 1; i <= N; i++)
        {
            pages += time / A[i];
        }

        // 答えが time 以下か判定する
        if (K <= pages)
        {
            end = time;
        }
        else
        {
            start = time + 1;
        }

#if DEBUG
        cout << start << "," << end << "," << pages << endl;
#endif
    }

    return start;
}

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    // cout << naive_solve(N, K, A) << endl;
    cout << solve(N, K, A) << endl;
    return 0;
}
