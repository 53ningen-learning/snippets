#include <iostream>

using namespace std;

int maximum = 0;
int count[109] = {};

int main()
{
    int v;
    while (cin >> v)
    {
        count[v]++;
        if (count[v] > maximum)
        {
            maximum = count[v];
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (count[i] == maximum)
        {
            cout << i << endl;
        }
    }

    return 0;
}
