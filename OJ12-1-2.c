#include <stdio.h>
int main()
{
    FILE *fp;
    char ch,ch1,ch2,ch3;
    if ((fp = fopen("answer.txt", "w")) == NULL)
    {
        return 1;
    }
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
        ch1 = ch2;
        ch2 = ch3;
        ch3 = ch;
        if (ch1 == 'b' && ch2 == 'y' && ch3 == 'e')
        {
            break;
        }
    }
    fclose(fp);
}