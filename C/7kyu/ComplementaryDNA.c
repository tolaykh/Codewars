/* Note:
    Allocate memory yourself!
*/
#include <stdlib.h>

char get_comp(char base)
{
  switch (base)
  {
    case 'A' : return 'T';
    case 'T' : return 'A';
    case 'G' : return 'C';
    case 'C' : return 'G';
  }
}
char *dna_strand(const char *dna)
{
  int len = strlen(dna);
  char *result = malloc(len + 1);
  int i = 0;
  
  if(!result)
    return NULL;
  while(dna[i] != '\0')
    {
    result[i] = get_comp(dna[i]);
    i++;
    }
  result[i] = '\0';
  return result;
}
