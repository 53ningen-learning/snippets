#include <iostream>

using namespace std;

void solve(int N, int M, int k[109], int x[109][109])
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            bool ijOK = false;
            // (i, j) が参加同じ回に参加していたケースがあるかチェックする
            for (int m = 1; m <= M; m++)
            {
                bool iOK = false;
                bool jOK = false;
                for (int p = 1; p <= k[m]; p++)
                {
                    if (!iOK && x[m][p] == i)
                    {
                        iOK = true;
                    }
                    if (!jOK && x[m][p] == j)
                    {
                        jOK = true;
                    }
                    if (iOK && jOK)
                    {
                        break;
                    }
                }
                if (iOK && jOK)
                {
                    ijOK = true;
                    break;
                }
            }
            if (!ijOK)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    int N, M;
    int k[109];
    int x[109][109];
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> k[i];
        for (int j = 1; j <= k[i]; j++)
        {
            cin >> x[i][j];
        }
    }
    solve(N, M, k, x);
    return 0;
}
