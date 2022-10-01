#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, buf;
    int min = 1000001;
    int max = -1000001;
    long long sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> buf;

        if (buf < min)
            min = buf;
        else if (buf > max)
            max = buf;

        sum += buf;
    }
    if (n == 1)
    {
        min = buf;
        max = buf;
    }

    printf("%d %d %lld\n", min, max, sum);
    return 0;
}
