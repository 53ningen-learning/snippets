#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/*
0 100 10 => 3 1 2
1. 元の配列をソート(N log(N))
2. 各値に対するインデックスを張ったマップを作る (N)
直前の値が同じだった場合 rank を加算しないよう手を入れる
3. 元の配列をなめてマップから rank を順番に出力する(N)

=> (N log(N) + 2 N)
*/
void solve1()
{
    int N;
    int A[100009];
    vector<int> VA;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        VA.push_back(A[i]);
    }

    // sort
    sort(VA.begin(), VA.end());

    // make index map
    map<int, int> m;
    for (int i = 1, j = 0; i <= N; i++)
    {
        if (i != 1 && VA.at(i - 2) == VA.at(i - 1))
        {
            j++;
        }
        m[VA.at(i - 1)] = i - j;
    }

    // output
    for (int i = 1; i < N; i++)
    {

        cout << m[A[i]] << " ";
    }
    cout << m[A[N]] << endl;
}

/*

別解:

1. 配列 A をコピーしソートした配列 B を作る: N log(N)
2. 重複を distinct: N
3. 配列 A の各要素にマッチする配列 B のインデックスを出力していく: N log(N)

計算量: 2 * N log(N) + N
*/
void solve2()
{
    int N;
    int A[100009], B[100009];
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    vector<int> V;
    for (int i = 1; i <= N; i++)
    {
        V.push_back(A[i]);
    }
    //　ソート + 重複排除
    sort(V.begin(), V.end());
    V.erase(unique(V.begin(), V.end()), V.end());

    // 辞書作成
    for (int i = 1; i <= N; i++)
    {
        B[i] = lower_bound(V.begin(), V.end(), A[i]) - V.begin() + 1;
    }

    // 出力
    for (int i = 1; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << B[N] << endl;
}

int main()
{
    solve2();
    return 0;
}
