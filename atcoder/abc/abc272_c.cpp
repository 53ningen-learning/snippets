#include <iostream>
#include <vector>

using namespace std;

int N;
int A[200009];

// TLE
void tleSolve(int N, int A[200009])
{
    int max = -1;
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            int sum = A[i] + A[j];
            if (sum > max && sum % 2 == 0)
            {
                max = sum;
            }
        }
    }
    cout << max << endl;
}

// a + b が偶数である => a, b が偶数 or a, b が奇数
// 大きな偶数 2 つと大きな奇数 2 つをメモっておき
// 偶数同士の和 vs 奇数同士の和うち大きな方を出力すれば単ループで済む
void solve(int N, int A[200009])
{
    int odds[] = {-1, -1};
    int evens[] = {-1, -1};
    for (int i = 1; i <= N; i++)
    {
        if (A[i] % 2 == 1)
        {
            if (A[i] > odds[1])
            {
                odds[0] = odds[1];
                odds[1] = A[i];
            }
            else if (A[i] > odds[0])
            {
                odds[0] = A[i];
            }
        }
        else
        {
            if (A[i] > evens[1])
            {
                evens[0] = evens[1];
                evens[1] = A[i];
            }
            else if (A[i] > evens[0])
            {
                evens[0] = A[i];
            }
        }
    }
    if (odds[0] == -1 && evens[0] == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(odds[0] + odds[1], evens[0] + evens[1]) << endl;
    }
}

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    solve(N, A);
    return 0;
}
