#include <stdio.h>
int main()
{
    int a[20], sum = 0, i, j,k;
    for (i = 1; i <= 20; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 20; i++)
    {
        for (j = i,k=1; (j+k) <= 19; k++)
        {
            if (a[j] == a[j + k])
            {
                break;
            }
        }
        if ((j+k) == 20)
        {
            sum++;
        }
    }
    printf("%d", sum+1);
}