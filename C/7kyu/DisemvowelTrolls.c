#include <stdlib.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
  int i = 0;
  while(str[i] !='\0')
    i++;
  
  char *result = malloc(i + 1);
  
  int j = 0;
  int c = 0;
  
  while(str[j] !='\0')
  {
    if (!(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||
      str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U'))
      result[c++] = str[j];
    j++;
  }
  result[c] = '\0'; //null terminator
	return result;
}
