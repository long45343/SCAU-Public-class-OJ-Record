#include <stdio.h>
void yuan(char *s, char *s2)
{
    while (*s != '\0')
    {
        if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' || *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            *s2 = *s;
            s2++;
        }
        s++;
    }
    *s2='\0';
}
int main()
{
    char str[81], str2[81];
    gets(str);
    yuan(str, str2);
    printf("%s", str2);
}