#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int pos;
vector<int> x;

int main()
{
    cin >> N >> pos;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }

    int maximum = *max_element(x.begin(), x.end());
    int minimum = *min_element(x.begin(), x.end());

    int ans;
    if (pos <= minimum)
    {
        ans = maximum - pos;
    }
    else if (pos >= maximum)
    {
        ans = pos - minimum;
    }
    else
    {
        ans = min((pos - minimum) * 2 + maximum - pos, pos - minimum + (maximum - pos) * 2);
    }
    cout << ans << endl;

    return 0;
}
