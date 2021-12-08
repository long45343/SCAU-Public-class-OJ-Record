#include <stdio.h>
int sort(int a[], int n)
{
    int i, j, k, tmp;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        tmp = a[k];
        a[k] = a[i];
        a[i] = tmp;
    }
}
int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    sort(a, 10);
    for (i = 0; i < 10; i++)
        printf("%d\n", a[i]);
    return 0;
}
