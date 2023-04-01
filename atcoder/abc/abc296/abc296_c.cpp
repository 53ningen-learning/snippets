#include <iostream>
#include <map>

using namespace std;

int N, X;
int A[200009] = {};
int D[200009] = {};
map<int, bool> m;

int main()
{
    cin >> N >> X;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        m[A[i]] = true;
        D[i] = A[i] - X;
    }

    for (int i = 1; i <= N; i++)
    {
        if (m[D[i]])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
