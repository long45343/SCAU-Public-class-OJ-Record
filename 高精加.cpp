#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char a[500], b[500], jg[500];
    for (int i = 0; i < 500; i++)
    {
        jg[i] = '0';
    }
    cin >> a;
    cin >> b;
    if (strlen(a) > strlen(b))
    {
        jg[strlen(a) + 1] = '\0';
        b[strlen(a)] = '\0';
        int k = strlen(a) - 1;
        int v = strlen(a) - strlen(b);
        for (int i = strlen(b) - 1; i >= 0; i--)
        {
            b[k] = b[i];
            k--;
        }
        for (int i = 0; i < v; i++)
        {
            b[i] = '0';
        }
        int flag = 0;
        for (int i = strlen(a) - 1; i >= 0; i--)
        {
            jg[i + 1] = ((int)a[i] + (int)b[i] - 96) % 10 + 48;
            if (flag == 1)
            {
                jg[i + 1]++;
                if ((jg[i + 1] - 48) >= 10)
                {
                    jg[i + 1] -= 10;
                }
                else
                    flag = 0;
            }
            if (((int)a[i] + (int)b[i] - 96) >= 10)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            jg[0]++;
        }
        if (jg[0] != '0')
        {
            puts(jg);
        }
        else
        {
            for (int i = 1; jg[i] != '\0'; i++)
            {
                cout << jg[i];
            }
        }
        return 0;
    }
    if (strlen(a) < strlen(b))
    {
        jg[strlen(b) + 1] = '\0';
        b[strlen(b)] = '\0';
        int k = strlen(b) - 1;
        int v = strlen(b) - strlen(a);
        for (int i = strlen(a) - 1; i >= 0; i--)
        {
            a[k] = a[i];
            k--;
        }
        for (int i = 0; i < v; i++)
        {
            a[i] = '0';
        }
        int flag = 0;
        for (int i = strlen(b) - 1; i >= 0; i--)
        {
            jg[i + 1] = ((int)b[i] + (int)a[i] - 96) % 10 + 48;
            if (flag == 1)
            {
                jg[i + 1]++;
                if ((jg[i + 1] - 48) >= 10)
                {
                    jg[i + 1] -= 10;
                }
                else
                    flag = 0;
            }
            if (((int)b[i] + (int)a[i] - 96) >= 10)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            jg[0]++;
        }
        if (jg[0] != '0')
        {
            puts(jg);
        }
        else
        {
            for (int i = 1; jg[i] != '\0'; i++)
            {
                cout << jg[i];
            }
        }
        return 0;
    }
    if (strlen(a) == strlen(b))
    {
        jg[strlen(b) + 1] = '\0';
        int flag = 0;
        for (int i = strlen(b) - 1; i >= 0; i--)
        {
            jg[i + 1] = ((int)b[i] + (int)a[i] - 96) % 10 + 48;
            if (flag == 1)
            {
                jg[i + 1]++;
                if ((jg[i + 1] - 48) >= 10)
                {
                    jg[i + 1] -= 10;
                }
                else
                    flag = 0;
            }
            if (((int)b[i] + (int)a[i] - 96) >= 10)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            jg[0]++;
        }
        if (jg[0] != '0')
        {
            puts(jg);
        }
        else
        {
            for (int i = 1; jg[i] != '\0'; i++)
            {
                cout << jg[i];
            }
        }
        return 0;
    }
}