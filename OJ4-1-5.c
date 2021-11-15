#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a, b, c;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    switch (op)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;

    default:
        printf("error");
        exit(0);
        break;
    }
    printf("result=%.2f", c);
}