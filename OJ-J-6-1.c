#include <stdio.h>
int a[16] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for (i = 0; i < 16; i++)
        printf("%d ", a[i]);
}
int main()
{
    int x, i;
    scanf("%d", &x);
    for (i = 0; i < 16; i++)
    {
        if (x < a[1])
        {
            for (int j = 15; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = x;
            break;
        }
        else if (x > a[14])
        {
            a[15] = x;
            break;
        }
        else if (x < a[i + 1])
        {
            for (int j = 15; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = x;
            break;
        }
    }
    display();
    return 0;
}