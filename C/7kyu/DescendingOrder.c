#include <inttypes.h>

uint64_t descendingOrder(uint64_t n)
{
  char *s = malloc(21);
  int i = 0;
  
  if (n == 0)
  {
        s[i++] = '0';
  }
  
  while(n > 0) 
  {
    s[i] = n % 10 + '0';
    i++;
    n = n / 10;
  }
  s[i] = '\0';
  
  for (int x = 0; x < i - 1; x++) //bubble sort
  {
    for (int y = 0; y < i - x - 1; y++)
        {
          if (s[y] < s[y + 1])
            {
                char temp = s[y];
                s[y] = s[y + 1];
                s[y + 1] = temp;
            }
        }
  }
  uint64_t result = 0;
  for(int k = 0; k < i; k++)
  { 
  result = result * 10 + (s[k] - '0');
  }
  free(s);
  return result;
}
