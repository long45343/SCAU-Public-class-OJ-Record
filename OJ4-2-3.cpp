#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    float a,b;
    scanf("%f,%f",&a,&b);
    if (fabs(sqrt(a*a+b*b)-1)<=0.001)
    {
        cout<<"Y";
        return 0;
    }
    cout<<"N";
}