#include <iostream>

using namespace std;

// 1 <= H, W <= 1500
int H, W;
int X[1501][1501];
// 1 <= Q <= 100000
int Q;
int A[100001] = {};
int B[100001] = {};
int C[100001] = {};
int D[100001] = {};

void solve1()
{
    cin >> H >> W;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> X[i][j];
        }
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int n = 1; n <= Q; n++)
    {
        // O(n^2): TLE
        int sum = 0;
        for (int i = A[n]; i <= C[n]; i++)
        {
            for (int j = B[n]; j <= D[n]; j++)
            {
                sum += X[i][j];
            }
        }
        cout << sum << endl;
    }
}

void solve2()
{
    cin >> H >> W;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> X[i][j];
        }
    }
    // 累積和の用意
    for (int i = 1; i <= H; i++)
    {
        int sum = 0;
        for (int j = 1; j <= W; j++)
        {
            X[i][j] = sum + X[i][j];
            sum = X[i][j];
        }
    }
    for (int j = 1; j <= W; j++)
    {
        int sum = 0;
        for (int i = 1; i <= H; i++)
        {
            X[i][j] = sum + X[i][j];
            sum = X[i][j];
        }
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    // 回答計算
    for (int n = 1; n <= Q; n++)
    {
        int a = A[n];
        int b = B[n];
        int c = C[n];
        int d = D[n];

        // 配列を 0 埋めしておけばここの3項演算子を削れるのでそのほうがよいかも
        int T = b > 1 ? X[c][b - 1] : 0;
        int U = a > 1 ? X[a - 1][d] : 0;
        int V = (a > 1 && b > 1) ? X[a - 1][b - 1] : 0;
        int S = X[c][d] - T - U + V;
        cout << S << endl;
    }
}

int main()
{
    solve2();
    return 0;
}
