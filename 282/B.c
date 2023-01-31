#include <stdio.h>
#define N 31

int main(void){
  int n, m, cnt;
  char str[N][N];
  scanf("%d%d", &n, &m);
  cnt = n * (n - 1) / 2;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf(" %c", &str[i][j]);
    }
  }
  
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = 0; k < m; k++){
        if(str[i][k] == 'x' && str[j][k] == 'x'){
          cnt--;
          break;
        }
      }
    }
  }

  printf("%d\n", cnt);
  return (0);
}