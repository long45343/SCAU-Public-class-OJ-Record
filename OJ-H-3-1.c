#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n], b[n], max = 0, a1, b1, c1, s;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf%lf", &a[i], &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                a1 = sqrt(pow(fabs(a[i] - a[j]), 2) + pow(fabs(b[i] - b[j]), 2));
                b1 = sqrt(pow(fabs(a[i] - a[k]), 2) + pow(fabs(b[i] - b[k]), 2));
                c1 = sqrt(pow(fabs(a[j] - a[k]), 2) + pow(fabs(b[j] - b[k]), 2));
                s = (a1 + b1 + c1) / 2;
                if (max < sqrt(s * (s - a1) * (s - b1) * (s - c1)))
                {
                    max = sqrt(s * (s - a1) * (s - b1) * (s - c1));
                }
            }
        }
    }
    printf("%.4lf", max);
}