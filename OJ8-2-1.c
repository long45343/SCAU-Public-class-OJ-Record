#include "stdio.h"
#include "string.h"
int main()
{
    char s[100] = "";
    char a[30];
    //复制起点
    gets(a);
    strcat(s, a);
    gets(a);
    strcat(s, a);
    gets(a);
    strcat(s, a);
    //复制终点
    printf("%s", s);
}