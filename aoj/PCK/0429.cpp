#include <iostream>

using namespace std;

int main()
{
    int w, m, s;
    cin >> w >> m >> s;

    bool yae = s - m <= 0;
    bool takeko = (w - s) - m <= 0;

    int ans = yae && takeko ? 3 : yae  ? 1
                              : takeko ? 2
                                       : 0;
    cout << ans << endl;
    return 0;
}
