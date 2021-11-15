#include <stdio.h>
int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    s += 20;
    m += (s / 60);
    h += (m / 60);
    s %= 60;
    m %= 60;
    h %= 24;
    printf("%02d:%02d:%02d", h, m, s);
}