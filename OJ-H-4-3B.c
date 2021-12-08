#include <stdio.h>
#include <string.h>
void solve(char *s)
{
    int i, len, j;
    len = strlen(s);
    for (i = 2; i < len; i++)
    {
        if (s[i - 2] == 'b' && s[i - 1] == 'a' && s[i] == 'd')
        {
            for (j = i + 1; j <= len; j++)
                s[j - 3] = s[j];
            i = i - 3;
        }
    }
}
int main()
{
    char s[81];
    gets(s);
    solve(s);
    puts(s);
}