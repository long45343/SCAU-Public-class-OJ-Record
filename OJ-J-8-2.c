#include <stdio.h>
struct data
{
    int num;
    char name[80];
    double score[3];
    double avg;
};
int main()
{
    int i, j;
    struct data stu[10], tmp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &stu[i].num);
        scanf("%s", &stu[i].name);
        scanf("%lf %lf %lf", &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
        {
            if (stu[j + 1].avg > stu[j].avg)
            {
                tmp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = tmp;
            }
        }
    for (i = 0; i < 10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}
