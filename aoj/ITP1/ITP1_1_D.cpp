#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int x, h, m, s;
    cin >> x;
    h = x / 60 / 60;
    m = x / 60 % 60;
    s = x % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
