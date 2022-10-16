#include <iostream>
#include <algorithm>

using namespace std;

int N, X;
int A[100000]; // 小さい順に整列済み

int find(int x, int ns[], int size)
{
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (ns[i] == x)
        {
            ans = i + 1;
            break;
        }
    }
    return ans;
}

int binsearch_find(int x, int ns[], int size)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int next = (start + end) / 2;
        if (ns[next] == x)
        {
            ans = next;
            break;
        }
        else if (ns[next] > x)
        {
            end = next - 1;
        }
        else
        {
            start = next + 1;
        }
    }
    return ans + 1;
}

int binsearch_find2(int x, int ns[], int size)
{
    // lower_bound は x 以上の最初の itr, upper_bound は x より大きい最初の itr なので lower_bound が適切
    int pos = lower_bound(ns, ns + size - 1, x) - ns;
    return pos + 1;
}

int main()
{
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << binsearch_find2(X, A, N) << endl;
    return 0;
}
