#include <stdio.h>
#include <math.h>
int main()
{
    double d, p, r;
    scanf("%lf%lf%lf", &d, &p, &r);
    printf("%.1f", log10(p / (p - d * r)) / log10(1 + r));
}