#include <stdio.h>
#include <stdlib.h>
/*create function f*/
char f(char *s)
{
    int sum=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        sum++;
    }
    return sum;
}
int main()
{
    char s[80];
    int i;
    scanf("%s", s);
    i = f(s);
    printf("%d\n", i);
    system("pause");
}