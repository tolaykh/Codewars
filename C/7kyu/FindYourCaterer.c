int find_caterer(int budget, int people) {
  int buffet1 = 15 * people;
  int buffet2 = 20 * people;
  float buffet3 = (people > 60) ? 30 * people * 0.8 : 30 * people;
  
  if(people == 0)
    return -1;
  if(budget < buffet1)
    return -1;
  if(budget >= buffet1 && budget < buffet2)
    return 1;
  if(budget >= buffet2 && budget < buffet3)
    return 2;
  if(budget >= buffet3)
    return 3;
 return -1;
}
