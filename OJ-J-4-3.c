#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    char p;
    scanf("%d", &a);
    if (100 >= a && 90 <= a)
    {
        p = 'A';
    }
    else if (89 >= a && 80 <= a)
    {
        p = 'B';
    }
    else if (79 >= a && 70 <= a)
    {
        p = 'C';
    }
    else if (69 >= a && 60 <= a)
    {
        p = 'D';
    }
    else if (59 >= a && 0 <= a)
    {
        p = 'E';
    }
    else
    {
        printf("error");
        exit(1);
    }
    printf("%c", p);
}