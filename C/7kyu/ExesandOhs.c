#include <stdbool.h>
#include <ctype.h>

bool xo (const char* str)
{
  int i = 0;
  int x = 0;
  int o = 0;
  while(str[i] != '\0')
  {
    char tl = tolower(str[i]);
    if(tl == 'x')
      x++;
    else if(tl == 'o')
      o++;
    i++;
  }
 return x == o;
}
