#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string S;

char X[] = {
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
    'g',
    'h',
};

int main()
{
    string ans = "";
    for (int i = 0; i < 8; i++)
    {
        cin >> S;
        size_t pos = S.find('*');
        if (pos != std::string::npos)
        {
            ans = X[pos] + to_string(8 - i);
        }
    }
    cout << ans << endl;
    return 0;
}
