#include <stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
            return 0;
        }
        flag = 0;
    }
}