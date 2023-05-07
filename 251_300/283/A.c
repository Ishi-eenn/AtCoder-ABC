#include <stdio.h>
#include <math.h>

int main(void){
  int a, b;
  long n = 1;

  scanf("%d%d", &a, &b);
  for(int i = 0; i < b; i++) n *= a;

  printf("%ld\n", n);
  return (0);
}