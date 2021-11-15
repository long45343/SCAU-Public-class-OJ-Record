#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double d, p, r, m;
    scanf("%lf%lf%lf", &d, &p, &r);
    m = 0;
    m += log10(p / (p - d * r)) / log10(1 + r);
    if (d == 0)
    {
        printf("0.0");
        exit(0);
    }
    if (m > 0)
    {
        printf("%.1lf", m);
    }
    else
    {
        printf("God");
    }
}