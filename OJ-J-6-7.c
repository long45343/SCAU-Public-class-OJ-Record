#include <stdio.h>
int main()
{
    char s1[80], s2[80];
    int i, sum1, sum2;
    gets(s1);
    gets(s2);
    for (i = 0, sum1 = 0; s1[i] != '\0'; i++)
    {
        sum1 += s1[i];
    }
    for (i = 0, sum2 = 0; s2[i] != '\0'; i++)
    {
        sum2 += s2[i];
    }
    printf("%d", sum1 - sum2);
}