#include <stdio.h>
#include <math.h>
int main()
{
    int n, l, k;
    scanf("%d", &n);
    l = -n;
    for (; l <= n; l++)
    {
        for (k = 0; k < fabs(l); k++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * (-fabs(l)+n) + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}