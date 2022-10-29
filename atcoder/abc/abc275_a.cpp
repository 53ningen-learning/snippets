// AC
#include <iostream>
#include <vector>

using namespace std;

void submit()
{
    int N;
    int H[109];
    int maxHeight = 0;
    int maxIndex = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
    }
    for (int i = 1; i <= N; i++)
    {
        if (maxHeight < H[i])
        {
            maxHeight = H[i];
            maxIndex = i;
        }
    }
    cout << maxIndex << endl;
}

int main()
{
    return 0;
}
