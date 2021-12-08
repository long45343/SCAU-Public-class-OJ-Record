#include <stdio.h>
int main()
{
    int s, c;
    scanf("%d%d", &s, &c);                               //写入学生数与课程数
    float f[s + 1][c + 1], sum[s + 1], avg[c + 1], temp; //定义数组
    for (int i = 1; i <= s; i++)                         //   初始化总分
    {
        sum[i] = 0;
    }
    for (int i = 1; i <= s; i++) //   读入成绩
    {
        for (int j = 1; j <= c; j++)
        {
            scanf("%f", &f[i][j]);
        }
    }
    for (int i = 1; i <= s; i++) //计算总分
    {
        for (int j = 1; j <= c; j++)
        {
            sum[i] += f[i][j];
        }
    }
    for (int i = 1; i < s; i++) //冒泡法排序
    {
        for (int j = i + 1; j <= s; j++)
        {
            if (sum[j] > sum[i])
            {
                for (int k = 1; k <= c; k++)
                {
                    temp = f[j][k];
                    f[j][k] = f[i][k];
                    f[i][k] = temp;
                }
                temp = sum[j];
                sum[j] = sum[i];
                sum[i] = temp;
            }
        }
    }
    for (int i = 1; i <= s; i++) //输出数据（带格式判断）
    {
        for (int j = 1; j <= c; j++)
        {
            if (f[i][j] - (int)f[i][j] != 0)
            {
                printf("%.1f ", f[i][j]);
            }
            else
                printf("%.0f ", f[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i <= s; i++) //初始化平均分
    {
        avg[i] = 0;
    }
    for (int i = 1; i <= s; i++) //计算平均分
    {
        for (int j = 1; j <= c; j++)
        {
            avg[j] += f[i][j];
        }
    }
    for (int i = 1; i <= c; i++)
    {
        avg[i] /= s;
    }
    for (int i = 1; i <= c; i++) //输出平均分（带格式判断）
    {
        if (avg[i] - (int)avg[i] != 0)
        {
            printf("%.1f ", avg[i]);
        }
        else
            printf("%.0f ", avg[i]);
    }
}