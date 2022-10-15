#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int b0 = 0;           // 「茹で足りない」の上限
    int b1l = 1000000001; // 「ちょうど良い」の下限
    int b1r = 0;          // 「ちょうど良い」の上限
    int b2 = 1000000001;  // 「茹ですぎ」の下限

    for (int i = 0; i < N; i++)
    {
        int a, s;
        cin >> a >> s;

        switch (s)
        {
        case 0: // 茹で足りない
            b0 = a > b0 ? a : b0;
            break;
        case 1: // ちょうど良い
            b1l = a < b1l ? a : b1l;
            b1r = a > b1r ? a : b1r;
            break;
        case 2: // 茹ですぎ
            b2 = a < b2 ? a : b2;
            break;
        }
    }

    int M;
    cin >> M;

    int b[100] = {};
    for (int i = 0; i < M; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < M; i++)
    {

        if (b1l <= b[i] && b[i] <= b1r)
        {
            cout << 1 << endl;
        }
        else if (b[i] <= b0)
        {
            cout << 0 << endl;
        }
        else if (b[i] >= b2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
