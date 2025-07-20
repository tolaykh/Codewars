#include <stddef.h>

size_t get_count(const char *s)
{
  int count = 0;
  int i = 0;
  while(s[i] != '\0')
    {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        count++;
      i++;
    }
  return count;
}
