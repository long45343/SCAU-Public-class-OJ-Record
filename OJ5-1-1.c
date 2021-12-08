#include <stdio.h>
int main()
{
    int a, b = 1, i;
    scanf("%d", &a);
    for (i = a; i > 0; i--)
    {
        b *= i;
    }
    printf("%d", b);
    return 0;
}