#include <stdio.h>
#include <string.h>
int main()
{
  char ch[81] = {'\0'}, ch2[81] = {'\0'};
  int flag = 0, i = 0, j = 0;
  gets(ch);
  while (1)
  {
    for (i = 0, j = 0; i < strlen(ch);)
    {
      if (ch[i] == 'b' && ch[i + 1] == 'a' && ch[i + 2] == 'd')
      {
        i += 3;
        flag = 1;
        continue;
      }
      ch2[j] = ch[i];
      j++;
      i++;
    }
    strcpy(ch, ch2);
    memset(ch2, 0, sizeof(ch2));
    if (flag == 0)
    {
      break;
    }
    flag = 0;
  }
  puts(ch);
}