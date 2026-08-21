#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 40, 70, 90, 100};
    int b[] = {30, 50, 60, 80};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int c[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}