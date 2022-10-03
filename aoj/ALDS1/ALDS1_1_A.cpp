#include <iostream>
using namespace std;

void debug_print(int a[], int size)
{
    for (int i = 0; i < size; i++)
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

void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        debug_print(a, size);
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    debug_print(a, size);
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertion_sort(a, n);

    return 0;
}
