#include <stdlib.h>

char *accum(const char *source)
{
  int n = strlen(source);
  int total = n * (n + 1) / 2 + (n - 1) + 1;
  char *s = malloc(total * sizeof(char));
  int i = 0;
  int pos = 0;
  while(source[i] !=  '\0')
  {
    s[pos++] = toupper(source[i]); 
    for (int j = 0; j < i; j++) 
      s[pos++] = tolower(source[i]);
    if(i < n - 1)
      s[pos++] = '-';
    i++; 
  }
  s[pos] = '\0';
  return s;
}
