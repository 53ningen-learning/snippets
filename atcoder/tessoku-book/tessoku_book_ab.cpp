#include <iostream>

using namespace std;

int N;
char T[100009] = {};
int A[100009] = {};
const int P = 10000;

void solve(int N, char T[100009], int A[100009])
{
    long value = 0;
    for (int i = 1; i <= N; i++)
    {
        switch (T[i])
        {
        case '+':
            // (A + B) % p = ((A % p) + (B % p)) % p
            value = (value + A[i] % P) % P;
            break;
        case '-':
            value = (value - A[i] % P + P) % P;
            break;
        case '*':
            value = (value * A[i] % P) % P;
            break;
        default:
            break;
        }
        cout << value << endl;
    }
}

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> T[i] >> A[i];
    }
    solve(N, T, A);
    return 0;
}
