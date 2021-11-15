#include <stdio.h>
int main()
{
    int a, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        if (a % 27 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}