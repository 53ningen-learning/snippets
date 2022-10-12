#include <iostream>
#include <queue>

using namespace std;

char BLACK = '#';
char WHITE = '.';
char BLUE = '@';

int main()
{
    int N, X;
    string A;
    cin >> N >> X >> A;

    queue<int> q;
    q.push(X - 1);
    A[X - 1] = BLUE;

    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        if (pos > 0 && A.at(pos - 1) == WHITE)
        {
            A[pos - 1] = BLUE;
            q.push(pos - 1);
        }
        if (pos < N - 1 && A.at(pos + 1) == WHITE)
        {
            A[pos + 1] = BLUE;
            q.push(pos + 1);
        }
    }
    cout << A << endl;
    return 0;
}