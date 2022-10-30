#include <iostream>

using namespace std;

static int DAYS[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
static string WEEK[] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday",
};

int main()
{
    while (true)
    {
        int m, d;
        cin >> m >> d;
        if (m == 0)
        {
            break;
        }

        int days = 0;
        for (int i = 0; i < m - 1; i++)
        {
            days += DAYS[i];
        }
        days += d;
        cout << WEEK[days % 7] << endl;
    }
    return 0;
}
