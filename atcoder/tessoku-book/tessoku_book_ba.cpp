#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    int query[100000] = {};
    int arg[100000] = {};
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
        if (query[i] == 1)
        {
            cin >> arg[i];
        }
    }

    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < Q; i++)
    {
        switch (query[i])
        {
        case 1:
            q.push(arg[i]);
            break;
        case 2:
            cout << q.top() << endl;
            break;
        case 3:
            q.pop();
            break;
        }
    }

    return 0;
}