#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    for (int i = 1;; i++)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else
        {
            printf("Case %d: %d\n", i, x);
        }
    }
    return 0;
}