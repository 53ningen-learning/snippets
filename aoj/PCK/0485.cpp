#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int houses[100000] = {};
    for (int i = 0; i < M; i++)
    {
        int t, h;
        cin >> t >> h;
        houses[h - 1] = t;
    }

    int total = 0;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        int m = houses[i];
        if (m == 0)
        {
            if (total > 0)
            {
                m = q.front();
                q.pop();
                q.push(m);
            }
        }
        else
        {
            q.push(m);
        }
        total += m;
    }
    cout << total << endl;
    return 0;
}
