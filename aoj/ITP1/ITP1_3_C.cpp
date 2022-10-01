#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            break;
        }
        else
        {
            x < y ? printf("%d %d\n", x, y) : printf("%d %d\n", y, x);
        }
    }
    return 0;
}