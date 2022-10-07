#include <iostream>
using namespace std;

void debugPrint(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << a[i];
        }
        else
        {
            cout << " " << a[i];
        }
    }
    cout << endl;
}

void bubbleSort(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                int buf = a[j - 1];
                a[j - 1] = a[j];
                a[j] = buf;
                count++;
            }
        }
    }
    debugPrint(a, n);
    cout << count << endl;
}

void bubbleSort2(int a[], int n)
{
    int count = 0;
    int i = 0;
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
                count++;
                sorted = false;
            }
        }
        i++;
    }
    debugPrint(a, n);
    cout << count << endl;
}

int main()
{
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSort2(a, n);
    return 0;
}