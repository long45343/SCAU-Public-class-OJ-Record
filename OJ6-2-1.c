#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for (i = 1; i <= 9999; i++)
    {
        if (i % 7 != 0)
        {
            continue;
        }
        if (i / 1000 == 5)
        {
            printf("%d\n", i);
            continue;
        }
        if (i / 100 % 10 == 5)
        {
            printf("%d\n", i);
            continue;
        }
        if (i / 10 % 100 % 10 == 5)
        {
            printf("%d\n", i);
            continue;
        }
        if (i % 1000 % 100 % 10 == 5)
        {
            printf("%d\n", i);
            continue;
        }
    }
}