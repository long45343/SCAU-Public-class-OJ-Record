#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[80];
    int i,j;
    a[1] = getchar();
    for (i = 2; a[i - 1] != '\n'; i++)
    {
        a[i] = getchar();
    }
    for (j = 1;j  <= (i-2 ) / 2;)
    {
        if (a[j] == a[i - 1 - j])
        {
            j++;
            continue;
        }
        printf("N");
        exit(0);
    }
    printf("Y");
}