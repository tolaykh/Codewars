#include <stdbool.h>
#include <stddef.h>

enum Operator { AND, XOR, OR };

bool logical_calculator (size_t len, const bool booleans[len], enum Operator operator)
{
  bool res=booleans[0];
  size_t counter = 1;
  while (counter < len) 
    {
    switch(operator)
     { case AND:
        res = res && booleans[counter];
        break;
      case OR:
        res = res || booleans[counter];
        break;
      case XOR:
        res = res != booleans[counter];
        break;
    }
    counter++;
    }
    return res;
}
