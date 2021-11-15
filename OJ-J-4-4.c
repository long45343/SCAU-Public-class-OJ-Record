#include <stdio.h>
int main()
{
    char x;
    int y;
    scanf("%c", &x);
    if ('0' <= x && x <= '9')
    {
        y = (int)x;
        y -= 48;
        switch (y)
        {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            printf("%d %d", y - 1, y + 1);
            break;
        case 0:
            printf("first 1");
            break;
        case 9:
            printf("8 last");
            break;
        default:
            break;
        }
    }
    else
    {
        printf("error");
    }
}