#include <iostream>
#include <math.h>

using namespace std;

int mask = 0x1;

int main()
{
    int N;
    cin >> N;

    for (int i = 9; i >= 0; i--)
    {
        cout << ((N & (0x1 << i)) >> i);
    }
    cout << endl;
    return 0;
}
