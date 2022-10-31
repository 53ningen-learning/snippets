#include <iostream>

using namespace std;

const string WIN = "win";
const string LOSE = "lose";
const string DRAW = "draw";

/*
普通に l〜r の勝敗をカウントして結果を判定する: O(N)
*/
string naive(int N, int A[100009], int l, int r)
{
    int win = 0, lose = 0;
    for (int i = l; i <= r; i++)
    {
        if (A[i] == 0)
        {
            lose++;
        }
        else
        {
            win++;
        }
    }
    return win == lose ? DRAW : win > lose ? WIN
                                           : LOSE;
}

/*
あらかじめ i 回目までの累積勝敗数を計算しておく
これにより入力された l, r に対してその区間の勝敗を O(1) で計算できる

win 累積, lose 累積を別に保持しても良いが、
勝ち越し負け越しの判断用途であれば
win を +1、lose を -1 として単一の配列があればよい

例:
i| (0) 1 2 3 4 5 6
@| (/) w l w w l w
a| (0) 1 0 1 2 1 2

2〜4: 2 - 1 = 1回勝ち越し
1〜5: 1 - 0 = 1回勝ち越し

*/
void solve(int N, int A[100009], int Q, int L[100009], int R[100009])
{
    int B[100009] = {};
    for (int i = 1; i <= N; i++)
    {
        B[i] = A[i] == 0 ? B[i - 1] - 1 : B[i - 1] + 1;
    }

    for (int i = 1; i <= Q; i++)
    {
        int r = B[R[i]];
        int l = B[L[i] - 1];
        string ans = r == l ? DRAW : r > l ? WIN
                                           : LOSE;
        cout << ans << endl;
    }
}

int main()
{
    int N;
    int A[100009] = {};
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    int Q;
    int L[100009] = {}, R[100009] = {};
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> L[i] >> R[i];
    }

    // TLE
    // for (int i = 1; i <= Q; i++)
    // {
    //     cout << naive(N, A, L[i], R[i]) << endl;
    // }

    solve(N, A, Q, L, R);
    return 0;
}
