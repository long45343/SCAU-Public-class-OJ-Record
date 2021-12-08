#include <stdio.h>
long fanc(int n)
{
    long i, r = 1;
    for (i = 1; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%ld", fanc(n));
}