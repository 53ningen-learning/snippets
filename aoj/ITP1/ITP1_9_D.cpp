#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

#define DEBUG 0

int main()
{
    string str;
    int q;
    string op;

    cin >> str >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> op;
        if (op == "print")
        {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        }
        else if (op == "reverse")
        {
            int a, b;
            cin >> a >> b;
            string p = str.substr(a, b - a + 1);
            reverse(p.begin(), p.end());
            str = str.replace(a, b - a + 1, p);
#if DEBUG
            cout << "!reversed: " << str << endl;
#endif
        }
        else if (op == "replace")
        {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str = str.replace(a, b - a + 1, p);
#if DEBUG
            cout << "!replaced: " << str << endl;
#endif
        }
    }
    return 0;
}
