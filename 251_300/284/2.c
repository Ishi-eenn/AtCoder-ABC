#include <stdio.h>
#define N 101
#define M 4951

int main(void){
  int n, m, cnt = 0, buff = -1, data[N], u[M], v[M];

  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
    data[i] = i;
  for(int i = 0; i < m; i++){
    scanf("%d%d", &u[i], &v[i]);
    if(u[i] < v[i]){
      data[v[i] - 1] = data[u[i] - 1];
    } else if(u[i] > v[i]){
      data[u[i] - 1] = data[v[i] - 1];
    }
  }

  for(int i = 0; i < n; i++)
    printf("%d\n", data[i]);
  
  for(int i = 0; i < n; i++){
    if(buff < data[i]){
      cnt++;
      buff = data[i];
    }
  }

  printf("\n\n%d\n", cnt);
  return (0);
}