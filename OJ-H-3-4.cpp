#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    double a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 10);
    double min = a[1] - a[0];
    for (int i = 1; i < 9; i++)
    {
        if (a[i] - a[i - 1] < min)
        {
            min = a[i] - a[i - 1];
        }
    }
    printf("%.2f", min);
}