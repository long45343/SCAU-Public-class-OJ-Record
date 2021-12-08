#include <stdio.h>
int main()
{
    int num = 0, word = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (!(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
            word = 0;
        else if (word == 0)
        {
            word = 1;
            num++;
        }
    }
    printf("%d", num);
}