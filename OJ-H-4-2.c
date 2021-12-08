#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1], temp;
    for (int i = n, k = 1; k <= n; i--, k++)
    {
        a[k] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        temp = a[n - i];
        for (int j = n - i; j >= 1; j--)
        {
            a[j] = a[j - 1];
        }
        a[1] = temp;
        temp = a[n - i];
        for (int j = n - i; j >= 1; j--)
        {
            a[j] = a[j - 1];
        }
        a[1] = temp;
    }
    printf("%d", a[1]);
}