#include <stdio.h>
#include <string.h>
#define N 1001

int main(void){
  int n, m, cnt = 0;
  char s[N][7], t[N][4];

  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
    scanf("%s", s[i]);
  for(int i = 0; i < m; i++)
    scanf("%s", t[i]);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
      if(strcmp(&s[i][3], t[j]) == 0){
        cnt++;
        break;
      }
  }

  printf("%d\n", cnt);
  return (0);
}