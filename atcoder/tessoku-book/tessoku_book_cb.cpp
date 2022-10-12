#include <iostream>
using namespace std;

bool check(int N, int A[100])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (A[i] + A[j] + A[k] == 1000)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int N, A[100];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    if (check(N, A))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
