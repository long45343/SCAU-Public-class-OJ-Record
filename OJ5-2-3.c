#include <stdio.h>
int main()
{
    char ch;
    int sum = 0, word = 0;
    ch = getchar();
    while (ch != '\n')
    {
        if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'))
        {
            word = 0;
        }
        else if (word == 0)
        {
            sum++;
            word = 1;
        }
        ch = getchar();
    }
    printf("%d", sum);
}