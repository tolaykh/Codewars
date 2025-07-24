char *maskify (char *masked, const char *string)
{
  int len;
  int i;
  int c;
  
  len = 0;
  i = 0;
  c = 0;
    while(string[i] != '\0')
      {
      len++;
      i++;
      }
    while(c < len)
      {
      if(c < len - 4)
        masked[c] = '#';
      else
        masked[c] = string[c];
    c++;
      }
    masked[len] = '\0';
  return masked;
}
