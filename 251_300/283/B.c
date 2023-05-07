#include <stdio.h>
#define N 100001

int main(void){
  int n, q, a[N], query[N][3], x[N];

  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  scanf("%d", &q);
  for(int i = 0; i < q; i++){
    scanf("%d%d", &query[i][0], &query[i][1]);

    if(query[i][0] == 1){
      scanf("%d", &x[i]);
      a[query[i][1] - 1] = x[i];
    } else if(query[i][0] == 2){
      printf("%d\n", a[query[i][1] - 1]);
    }
  }

  return (0);
}