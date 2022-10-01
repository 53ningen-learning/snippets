#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    while (true)
    {
        string x;
        cin >> x;
        if (x == "0")
        {
            break;
        }

        int sum = 0;
        for (int i = 0; i < x.length(); i++)
        {
            sum += (int)x[i] - 48;
        }
        cout << sum << endl;
    }
    return 0;
}