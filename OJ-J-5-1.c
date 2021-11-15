#include <stdio.h>
#include <math.h>
int main()
{
    int z = 0, s = 0, k = 0, b = 0;
    char a;
    while ((a = getchar()) != '\n')
    {
        if ('0' <= a && a <= '9')
        {
            s += 1;
        }
        else if ('a' <= a && a <= 'z' || 'A' <= a && a <= 'Z')
        {
            z += 1;
        }
        else if (a == ' ')
        {
            k += 1;
        }
        else
        {
            b += 1;
        }
    }
    printf("%d %d %d %d",z,s,k,b);
}