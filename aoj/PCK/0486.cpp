#include <iostream>
#include <tuple>

#define DEBUG 1

using namespace std;

const char WALL = '#';
const char WAY = '.';
const char START = 'S';
const char GOAL = 'G';
const char UP = 'U';
const char DOWN = 'D';
const char LEFT = 'L';
const char RIGHT = 'R';

struct point
{
    int i;
    int j;
};

int solve(char map[300][300], int H, int W, point start, point goal)
{

    return 0;
}

int main()
{
    int H, W; // 2 <= H <= 300, 2 <= W <= 300
    cin >> H >> W;

    char s[300][300] = {};
    point start;
    point goal;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == START)
            {
                start.i = i;
                start.j = j;
            }
            if (s[i][j] == GOAL)
            {
                goal.i = i;
                goal.j = j;
            }
        }
    }

#if DEBUG
    cout << "> start: " << start.i << "," << start.j << endl;
    cout << "> goal:  " << goal.i << "," << goal.j << endl;
#endif

    cout << solve(s, H, W, start, goal) << endl;
    return 0;
}
