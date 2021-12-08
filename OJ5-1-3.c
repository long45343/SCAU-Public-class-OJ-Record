#include <stdio.h>
#include <string.h>
int main()
{
    char a;
    int sum = 0;
    while ((a = getchar()) != '\n')
    {
        if (a >= '0' && a <= '9')
            sum += (int)a - 48;
    }
    printf("%d", sum);
}