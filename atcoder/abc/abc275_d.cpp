#include <iostream>
#include <map>

using namespace std;
// AC

unsigned long N;
map<unsigned long, unsigned long> m;

unsigned long f(unsigned long N)
{
    if (m.count(N) == 0)
    {
        if (N == 0)
        {
            return 1;
        }
        unsigned long ans = f(N / 2) + f(N / 3);
        m[N] = ans;
        return ans;
    }
    else
    {
        return m[N];
    }
}

int main()
{
    cin >> N;
    cout << f(N) << endl;
    return 0;
}
