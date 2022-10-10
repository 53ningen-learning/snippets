#include <iostream>
using namespace std;

int main()
{
    int N, K, x;
    bool map[100] = {};
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        map[x] = true;
    }

    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (K - x > 0 && map[K - x])
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
