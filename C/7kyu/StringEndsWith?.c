#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
  int len = strlen(string);
  int len2= strlen(ending);
  if(len2 > len)
    return false;
  int b = strncmp(string + (len - len2), ending, len2);
  if(b == 0)
    return true;
  else
    return false;
}
