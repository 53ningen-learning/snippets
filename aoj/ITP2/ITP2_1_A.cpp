#include <iostream>
#include <vector>
#include <deque>

using namespace std;

struct query
{
    int op;
    int arg1;
    int arg2;
};

static int q;
static vector<query> queries;
static deque<int> A;

int main()
{
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        query a;
        cin >> a.op;
        cin >> a.arg1;
        if (a.op == 0)
        {
            cin >> a.arg2;
        }
        queries.push_back(a);
    }

    for (const auto &a : queries)
    {
        switch (a.op)
        {
        case 0:
            a.arg1 == 0 ? A.push_front(a.arg2) : A.push_back(a.arg2);
            break;
        case 1:
            cout << A.at(a.arg1) << endl;
            break;
        case 2:
            a.arg1 == 0 ? A.pop_front() : A.pop_back();
            break;
        default:
            break;
        }
    }
    return 0;
}
