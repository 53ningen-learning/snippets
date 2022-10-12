#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int x = K - (i + j);
            if (1 <= x && x <= N)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
