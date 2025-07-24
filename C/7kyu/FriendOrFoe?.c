#include <string.h>
#include <stddef.h>  // for NULL

void filter_friends (const char *names[])
{
  // names[] is NULL-terminated, mutate it
  // You must re-use the pointers in 'names', do not allocate memory
  // Do not forget to NULL-terminate 'names'
  int i;
  int j;
  
  i = 0;
  j = 0;
  while(names[i] != NULL)
  {
    if(strlen(names[i]) == 4)
      {
        names[j] = names[i];
        j++;
      }
    i++;  
  }
names[j] = NULL;
}
