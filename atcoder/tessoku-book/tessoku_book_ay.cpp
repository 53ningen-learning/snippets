#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    int query[100000] = {};
    string arg[100000] = {};
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
        if (query[i] == 1)
        {
            cin >> arg[i];
        }
    }

    stack<string> s;
    for (int i = 0; i < Q; i++)
    {
        switch (query[i])
        {
        case 1:
            s.push(arg[i]);
            break;
        case 2:
            cout << s.top() << endl;
            break;
        case 3:
            s.pop();
            break;
        }
    }

    return 0;
}