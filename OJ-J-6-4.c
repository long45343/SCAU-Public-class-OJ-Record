#include <stdio.h>
int main()
{
    int a[4], b[4], c[4], i;
    for (i = 1; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 4; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 1; i <= 4; i++)
    {
        scanf("%d", &c[i]);
    }
    printf("%d",a[1]+b[2]+c[3]);
}