#include <iostream>

using namespace std;

int N;
char S[109] = {};

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> S[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            continue;
        }
        if (S[i] == S[i - 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
