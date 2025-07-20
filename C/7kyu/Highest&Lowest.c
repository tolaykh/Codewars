#include <stdio.h>

void high_and_low (const char *strnum, char *result)
{
  char *temp = malloc(strlen(strnum) + 1);
  strcpy(temp, strnum); //copy string into temp
  
  char *token = strtok(temp, " "); //tokenizer
  int min = atoi(token);
  int max = atoi(token);
  while (token != NULL) 
  {
    int num = atoi(token); 
    if(num > max)
      max = num;
    
    if (num < min)
    min = num;
    token = strtok(NULL, " "); // get the next token
  }
  sprintf(result, "%d %d", max, min);
  free(temp);
}
