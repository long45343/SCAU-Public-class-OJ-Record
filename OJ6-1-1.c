#include <stdio.h>
int main()
{
    int n, i;
    for (i = 2; i <= 200; i++)
    {
        for (n = 2; i >= n; n++)
        {
            if (i % n == 0 && i != n)
            {
                break;
            }
            if (i == n)
            {
                printf("%d\n", i);
            }
        }
    }
}