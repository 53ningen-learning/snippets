#include <iostream>
#include <map>

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    int query[100000] = {};
    string arg1[100000] = {};
    int arg2[100000] = {};
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
        if (query[i] == 1)
        {
            cin >> arg1[i] >> arg2[i];
        }
        else if (query[i] == 2)
        {
            cin >> arg1[i];
        }
    }

    map<string, int> m;
    for (int i = 0; i < Q; i++)
    {
        switch (query[i])
        {
        case 1:
            m[arg1[i]] = arg2[i];
            break;
        case 2:
            cout << m[arg1[i]] << endl;
            break;
        }
    }

    return 0;
}