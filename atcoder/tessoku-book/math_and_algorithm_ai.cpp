#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    int A[100000] = {};
    int L, R;

    for (int i = 1; i <= N; i++)
    {
        int a;
        cin >> a;
        A[i] = A[i - 1] + a;
    }
    for (int i = 0; i < Q; i++)
    {
        cin >> L >> R;
        cout << A[R] - A[L - 1] << endl;
    }
    return 0;
}
