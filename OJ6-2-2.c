#include <stdio.h>
#include <math.h>
int main()
{
    int n, l, k;
    scanf("%d", &n);
    for (l = -n + 1; l < n; l++)
    {
        for (k = 0; k < fabs(l); k++)
        {
            printf(" ");
        }
        for (k = 1; k <= -fabs(l) + n - 1; k++)
        {
            printf("%d", k);
        }
        k = -fabs(l) + n;
        printf("%d", k);
        for (k = -fabs(l) + n - 1; k > 0; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}