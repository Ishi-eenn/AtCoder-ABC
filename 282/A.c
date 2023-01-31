#include <stdio.h>

int main(void){
  char str = 'A';
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    printf("%c", str);
    str++;
  }
  putchar('\n');
  return (0);
}