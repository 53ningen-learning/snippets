#include <iostream>
#include <functional>

using namespace std;

int N, Q;
string S;
int a[200001];
int b[200001];
int c[200001];
int d[200001];

void tleSolve()
{
    for (int i = 1; i <= Q; i++)
    {
        bool matched = S.substr(a[i] - 1, b[i] - a[i] + 1) == S.substr(c[i] - 1, d[i] - c[i] + 1);
        cout << (matched ? "Yes" : "No") << endl;
    }
}

int main()
{
    cin >> N >> Q;
    cin >> S;
    for (int i = 1; i <= Q; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    tleSolve();
    return 0;
}
