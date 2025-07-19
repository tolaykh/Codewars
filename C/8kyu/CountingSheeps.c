#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
  int i = 0;
  int n = 0;
  while(i < count)
  {
    if(sheep[i] == true)
      ++n;
    i++;
  }
  return n;
}
