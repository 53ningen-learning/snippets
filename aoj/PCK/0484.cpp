#include <iostream>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;

    int a[100];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    bool delayed = false;
    int count = 0;
    int spritTime = 0;
    for (int i = 0; i < N; i++)
    {
        int t = spritTime + T;
        if (t <= a[i])
        {
            delayed = false;
            spritTime = a[i];
            count++;
        }
        else
        {
            if (delayed)
            {
                break;
            }
            spritTime = t;
            delayed = true;
        }
    }
    cout << count << endl;
    return 0;
}