#include <stdio.h>
#include <string.h>
int main ()
{
   char a[80];
   gets(a);
   strlwr(a);
   puts(a);
}