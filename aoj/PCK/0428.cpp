#include <iostream>

using namespace std;

const int SEC = 3600; //=> 1 DEG

int main()
{
    int Ca, Co;
    cin >> Ca >> Co;

    cout << Ca / SEC << " " << Co / SEC << endl;
    return 0;
}
