#include <stdio.h>
#define N 101
#define M 4951

int main(void){
  int n, m, cnt = 0, buff, data[N], u[M], v[M];

  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
    data[i] = i;
  for(int i = 0; i < m; i++){
    scanf("%d%d", &u[i], &v[i]);
    if(u[i] < v[i]){
      buff = data[v[i] - 1];
      data[v[i] - 1] = data[u[i] - 1];
      for(int i = 0; i < n; i++){
        if(data[i] == buff)
          data[i] = data[u[i] - 1];
      }
    } else if(u[i] > v[i]){
      buff = data[u[i] - 1];
      data[u[i] - 1] = data[v[i] - 1];
      for(int i = 0; i < n; i++){
        if(data[i] == buff){
          data[i] = data[v[i] - 1];
        }
      }
    }
  }
  buff = -1;
  for(int i = 0; i < n; i++){
    if(buff < data[i]){
      cnt++;
      buff = data[i];
    }
  }

  printf("%d\n", cnt);
  return (0);
}