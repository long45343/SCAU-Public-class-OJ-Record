#include <stdio.h>
int main()
{
    long int a, b, temp, t1;
    scanf("%ld,%ld", &a, &b);
    if (a == b)
    {
        printf("%ld", a);
        return 0;
    }
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    t1 = a;
    for (t1 -= b; b != t1;)
    {
        if (b < t1)
        {
            temp = b;
            b = t1;
            t1 = temp;
        }
        b -= t1;
    }
    printf("%ld", t1);
}