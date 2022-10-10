#include <iostream>
using namespace std;

int main()
{
    int N, X, A;
    bool flag = false;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (A == X)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
