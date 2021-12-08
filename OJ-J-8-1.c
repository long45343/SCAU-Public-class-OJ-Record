#include <stdio.h>
struct DATE
{
    int year;
    int month;
    int day;
};
int days(struct DATE date)
{
    int sum = 0;
    switch (date.month)
    {
    case 1:
        sum += 0;
        break;
    case 2:
        sum += 31;
        break;
    case 3:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29;
                break;
            }
            sum += 31 + 28;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29;
            break;
        }
        sum += 31 + 28;
        break;
    case 4:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31;
                break;
            }
            sum += 31 + 28 + 31;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31;
            break;
        }
        sum += 31 + 28 + 31;
        break;
    case 5:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30;
                break;
            }
            sum += 31 + 28 + 31 + 30;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30;
            break;
        }
        sum += 31 + 28 + 31 + 30;
        break;
    case 6:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31;
        break;
    case 7:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30;
        break;
    case 8:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30 + 31;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30 + 31;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30 + 31;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30 + 31;
        break;
    case 9:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        break;
    case 10:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
    case 11:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
    case 12:
        if (date.year % 100 == 0)
        {
            if (date.year % 400 == 0)
            {
                sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                break;
            }
            sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            break;
        }
        if (date.year % 4 == 0)
        {
            sum += 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            break;
        }
        sum += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    default:
        break;
    }
    return sum + date.day;
}
int main()
{
    struct DATE d;
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    printf("%d", days(d));
}