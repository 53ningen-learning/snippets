#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string S;
    cin >> S;

    stack<int> s;
    for (int i = 1; i <= (int)S.size(); i++)
    {
        if (S.at(i - 1) == '(')
        {
            s.push(i);
        }
        else if (S.at(i - 1) == ')')
        {
            cout << s.top() << " " << i << endl;
            s.pop();
        }
    }
    return 0;
}
