#include <stdio.h>
#include <math.h>
int main()
{
    int m, i, s1, s2;
    float a = 0.01, b[31], c[31];
    scanf("%d", &m);
    b[1] = m;
    c[1] = 0.01;
    for (i = 2; i <= 31; i++)
    {
        b[i] = b[i - 1] + m;
    }
    for (i = 2; i <= 31; i++)
    {
        c[i] = c[i - 1] * 2;
    }
    for (i = 1, s2 = 0; s1 >= s2; i++, s1 = b[i], s2 += c[i])
    {
    }
    printf("%d", i);
}