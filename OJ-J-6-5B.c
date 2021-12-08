#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a[3][4], flag, col;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        col = 0;
        for (j = 1; j < 4; j++)
            if (a[i][j] > a[i][col])
                col = j;
        flag = 1;
        for (j = 0; j < 3; j++)
            if (a[j][col] <= a[i][col] && j != i)
                flag = 0;
        if (flag == 1)
        {
            printf("%d", a[i][col]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
