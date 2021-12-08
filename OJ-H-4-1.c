#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[17];
    int sum = 0, c;
    gets(a);
    if (strlen(a) != 17)
    {
        printf("ERROR");
        return 0;
    }
    sum = 0;
    for (int i = 0; i < 17; i++)
    {
        sum += (a[i] - '0') * pow(2, 17 - i);
    }
    c = (12 - sum % 11) % 11;
    if (c == 10)
    {
        for (int i = 0; i < 17; i++)
        {
            printf("%d", a[i] - '0');
        }
        printf("X");
        return 0;
    }
    for (int i = 0; i < 17; i++)
    {
        printf("%d", a[i] - '0');
    }
    printf("%d\n", c);
}