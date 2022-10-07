#include <iostream>
using namespace std;

int main()
{
    int buf;
    int a = 1;
    int b = 2;
    cout << a << " " << b << endl;
    buf = a;
    a = b;
    b = buf;
    cout << a << " " << b << endl;
    return 0;
}