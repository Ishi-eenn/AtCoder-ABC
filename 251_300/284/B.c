#include <stdio.h>
#define N 101

int main(void){
  int n, m, data[N][N], ans[N] = {};

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &m);
    for(int j = 0; j < m; j++){
      scanf("%d", &data[i][j]);
      if(data[i][j] % 2 == 1)
        ans[i]++;
    }
  }

  for(int i = 0; i < n; i++)
    printf("%d\n", ans[i]);

  return (0);
}