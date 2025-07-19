//  for invalid input, return -1
int sum_mul(int n, int m) 
{
  int i = n;
  int sum = 0;
  if(n <= 0 || m <= 0)
    return -1;
  while(i < m)
  {
   if(i % n == 0)
     sum = sum + i;
     ++i;
  }
  return sum;
}
