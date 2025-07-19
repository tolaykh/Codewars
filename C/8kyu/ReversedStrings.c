char *strrev (char *string)
{
  int i = 0;
  int start = 0; 
 
  while(string[i] != '\0')
    ++i;
  int end = i - 1;
  
  while(start < end)
    {
    char temp = string[start];
    string[start] = string[end];
    string[end] = temp;
    start++;
    end--;
    }
  return string;
}
