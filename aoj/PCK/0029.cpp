#include <iostream>
#include <vector>
#include <map>

using namespace std;

static string longestWord = "";
static string modeWord = "";
static int modeCount = 0;
static vector<string> words;
static map<string, int> counter;

int main()
{
    string s;
    while (cin >> s)
    {
        words.push_back(s);
    }

    for (int i = 0; i < (int)words.size(); i++)
    {
        string s = words[i];
        if (s.length() > longestWord.length())
        {
            longestWord = s;
        }
        counter[s]++;
        if (counter[s] > modeCount)
        {
            modeWord = s;
            modeCount = counter[s];
        }
    }
    cout << modeWord << " " << longestWord << endl;
    return 0;
}
