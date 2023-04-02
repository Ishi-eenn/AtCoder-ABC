#include <stdio.h>
#include <string.h>
#define N 100

int main(void){
  int n, f = 0, t = 0;
  char s[N][8];

  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%s", s[i]);

  for(int i = 0; i < n; i++){
    if(strcmp(s[i], "For") == 0)
      t++;
    else
      f++;
  }

  if(t > f)
    puts("Yes");
  else
    puts("No");
  return (0);
}