#include <stdio.h>
int main()
{
    int a[11], i, j;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        for (j = i-1; j > 0; j--)
        {
            if (a[i] == a[j])
            {
                break;
            }
        }
        if (j == 0)
        {
            printf("%d\n", a[i]);
        }
    }
}