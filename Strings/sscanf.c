#include <stdio.h>

int main(int argc, char **argv){
  char info[] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info, "%s %s %d", city, state, &population);
  printf("%d people live in %s, %s.\n", population, city, state);

  return 0;
}