#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int toIndex(char suit, int rank)
{
    switch (suit)
    {
    case 'S':
        return rank - 1;
    case 'H':
        return rank + 13 - 1;
    case 'C':
        return rank + 26 - 1;
    case 'D':
        return rank + 39 - 1;
    default:
        return 0;
        break;
    }
}

char toSuit(int index)
{
    switch (index / 13)
    {
    case 0:
        return 'S';
    case 1:
        return 'H';
    case 2:
        return 'C';
    case 3:
        return 'D';
    default:
        return '\0';
    }
}

int toRank(int index)
{
    return index % 13 + 1;
}

int main()
{
    bool flags[52] = {false};
    int n, rank;
    char suit;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> suit >> rank;
        flags[toIndex(suit, rank)] = true;
    }
    for (int i = 0; i < 52; i++)
    {
        if (!flags[i])
        {
            printf("%c %d\n", toSuit(i), toRank(i));
        }
    }
    return 0;
}
