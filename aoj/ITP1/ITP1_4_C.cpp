#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;
    char op;
    bool flag = false;

    while (true)
    {
        cin >> a >> op >> b;

        switch (op)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            flag = true;
            break;
        }

        if (flag)
        {
            break;
        }
    }

    return 0;
}
