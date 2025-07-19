#include <stddef.h>

int sum_array(const int values[/* count */], size_t count)
{
  int i = 0;
  double sum = 0;
  while(i < count)
  {
    sum = sum + values[i];
    i++;
  }
    return sum;
}
