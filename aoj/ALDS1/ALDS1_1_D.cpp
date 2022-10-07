#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int r1, r2;
    cin >> r1 >> r2;

    int rj;
    int ri = r1 < r2 ? r1 : r2;
    int p = r2 - r1;
    for (int i = 2; i < n; i++)
    {
        cin >> rj;
        // 時系列データの最大差を検出するためには
        // 現在のデータポイントとそれ以前の最小値の差が一番大きいものを選択すればよい
        p = rj - ri > p ? rj - ri : p;

        // 次のデータポイント処理に移る際現在のデータポイントがいままでで最小の値でないかチェックする
        ri = rj < ri ? rj : ri;
    }
    cout << p << endl;
    return 0;
}
