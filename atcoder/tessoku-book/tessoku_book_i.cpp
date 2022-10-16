#include <iostream>

using namespace std;

// 1 <= H, W <= 1500
int H, W;
// 1 <= N <= 100000
int N;

int A[100009] = {};
int B[100009] = {};
int C[100009] = {};
int D[100009] = {};

int Z[1509][1509] = {};

// ナイーブな解放
/*

データ入力: O(HW)
状態計算: O(HW)

Ex Input:
5 5 2
1 1 3 3
2 2 4 4

#0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

#1: 1 1 3 3
1 1 1 0 0
1 1 1 0 0
1 1 1 0 0
0 0 0 0 0
0 0 0 0 0

#2: 2 2 4 4
1 1 1 0 0
1 2 2 1 0
1 2 2 1 0
0 1 1 1 0
0 0 0 0 0

*/
void tleSolve()
{
    for (int n = 1; n <= N; n++)
    {
        for (int i = A[n]; i <= C[n]; i++)
        {
            for (int j = B[n]; j <= D[n]; j++)
            {
                Z[i][j]++;
            }
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (j != 1)
            {
                cout << " ";
            }
            cout << Z[i][j];
        }
        cout << endl;
    }
}

// 累積和を利用した解法
/*
二次元累積和利用時のデータ保持方法と結果の計算方法

データ入力: O(1)
状態計算: O(HW)

例:
5 5 2
1 1 3 3
2 2 4 4

#0
 0  0  0  0  0
 0  0  0  0  0
 0  0  0  0  0
 0  0  0  0  0
 0  0  0  0  0

#1: 1 1 3 3 (diff => 横方向累積 => 縦方向累積)
 1  0  0 -1  0 =>  1  1  1  0  0 =>  1  1  1  0  0
 0  0  0  0  0 =>  0  0  0  0  0 =>  1  1  1  0  0
 0  0  0  0  0 =>  0  0  0  0  0 =>  1  1  1  0  0
-1  0  0  1  0 => -1 -1 -1  0  0 =>  0  0  0  0  0
 0  0  0  0  0 =>  0  0  0  0  0 =>  0  0  0  0  0

#2: 2 2 4 4
 1  0  0 -1  0 =>  1  1  1  0  0 =>  1  1  1  0  0
 0  1  0  0 -1 =>  0  1  1  1  0 =>  1  2  2  1  0
 0  0  0  0  0 =>  0  0  0  0  0 =>  1  2  2  1  0
-1  0  0  1  0 => -1 -1 -1  0  0 =>  0  1  1  1  0
 0 -1  0  0  1 =>  0 -1 -1 -1  0 =>  0  0  0  0  0

*/
void solve()
{
    for (int n = 1; n <= N; n++)
    {
        Z[A[n]][B[n]]++;
        Z[C[n] + 1][D[n] + 1]++;
        Z[A[n]][D[n] + 1]--;
        Z[C[n] + 1][B[n]]--;
    }

    // 横方向の累積和
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            Z[i][j] = Z[i][j - 1] + Z[i][j];
        }
    }

    // 縦方向の累積和
    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            Z[i][j] = Z[i - 1][j] + Z[i][j];
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (j != 1)
            {
                cout << " ";
            }
            cout << Z[i][j];
        }
        cout << endl;
    }
}

int main()
{
    cin >> H >> W >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    for (int i = 0; i < 1509; i++)
    {
        for (int j = 0; j < 1509; j++)
        {
            Z[i][j] = 0;
        }
    }
    solve();
    return 0;
}
