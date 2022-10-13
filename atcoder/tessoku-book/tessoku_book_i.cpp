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

void solve()
{
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
    tleSolve();
    return 0;
}

/*
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