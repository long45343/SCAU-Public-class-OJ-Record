#include <stdio.h>
#define PI 3.14159
float s(float r,float h)
{
    return PI*r*r*2+2*PI*r*h;
}
int main ()
{
    float r,h;
    scanf("%f%f",&r,&h);
    printf("%.3f",s(r,h));
}