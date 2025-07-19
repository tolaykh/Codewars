long pillars(int num_of_pillars, int distance, int width) 
{
  int i = 2;
  int sum = 0;
  while(i <= num_of_pillars)
  {
    sum = sum + distance * 100;
      if(i != num_of_pillars)
        sum = sum + width;
    i++;
  }
  return sum;
}
