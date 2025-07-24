#include <stdbool.h>
#include <ctype.h>
#include <stddef.h>

bool IsIsogram (const char *string) 
{
  int seen[26] = {0}; // for 26 letters 
  int i = 0;
  
  while(string[i] !=  NULL)
  {
    char c = tolower(string[i]);
    int index = c - 'a';
    
      if (seen[index])
        return false;
    
      seen[index] = 1;
    i++;
  }
	return true;
}
