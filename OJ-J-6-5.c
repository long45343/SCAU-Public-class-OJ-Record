#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i, maxa = 0, maxb = 0, maxc = 0, i1, i2, i3;
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
    for (i = 1; i <= 4; i++)
    {
        if (a[i] > maxa)
        {
            maxa = a[i];
        }
    }
    for (i = 1; i <= 4; i++)
    {
        if (b[i] > maxb)
        {
            maxb = b[i];
        }
    }
    for (i = 1; i <= 4; i++)
    {
        if (c[i] > maxc)
        {
            maxc = c[i];
        }
    }
    for (i1 = 1; i1 <= 4; i1++)
    {
        if (a[i1] == maxa)
        {
            break;
        }
    }
    for (i2 = 1; i2 <= 4; i2++)
    {
        if (b[i2] == maxb)
        {
            break;
        }
    }
    for (i3 = 1; i3 <= 4; i3++)
    {
        if (c[i3] == maxc)
        {
            break;
        }
    }
    if (a[i1] < b[i1] && a[i1] < c[i1])
    {
        printf("%d\n", a[i1]);
    }
    if (b[i2] < a[i2] && b[i2] < c[i1])
    {
        printf("%d\n", b[i2]);
    }
    if (c[i3] < a[i3] && c[i3] < b[i3])
    {
        printf("%d\n", c[i3]);
    }
    if (!(c[i3] < a[i3] && c[i3] < b[i3]) && !(b[i2] < a[i2] && b[i2] < c[i2]) && !(a[i1] < b[i1] && a[i1] < c[i1]))
    {
        printf("NO\n");
    }
}