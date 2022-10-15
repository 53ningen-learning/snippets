#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int groups = 0;
    bool linked = false;
    for (int i = 0; i < N; i++)
    {
        int c = 0;
        cin >> c;
        if (c == 1)
        {
            linked = true;
        }
        else
        {
            groups++;
            if (linked)
            {
                linked = false;
            }
        }
    }
    groups = groups == 0 ? 1 : groups;
    cout << groups << endl;
    return 0;
}
