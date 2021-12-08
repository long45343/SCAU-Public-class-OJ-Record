#include <stdio.h>
int main()
{
    int n, m, M, w, k, sum = 0;
    scanf("%d%d", &n, &m);
    for (M = 0; M <= n; M++)
    {
        for (w = 0; w <= n; w++)
        {
            for (k = 0; k <= n; k++)
            {
                if ((M + w + k == n )&& ((3 * M) + (2 * w) + (k / 2) == m)&&k%2==0)
                    sum++;
            }
        }
    }
    if (sum == 0)
    {
        printf("no");
        return 0;
    }
    printf("%d", sum);
}