#include <stdio.h>
#define N 11

int main(void){
  int n;
  char data[N][N];

  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%s", data[i]);

  for(int i = n - 1; i > -1; i--)
    printf("%s\n", data[i]);

  return (0);
}