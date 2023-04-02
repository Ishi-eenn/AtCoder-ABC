#include <stdio.h>
#define N 200001

int b(int i, int e[N]){
  if(e[i] == i)
    return i;
  return (e[i] = b(e[i], e));
}

int main(void){
  int n, m, e[N]={}, u, v, h=0, c;

  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++)
    e[i] = i;

  for(int i = 0; i < m; i++){
    scanf("%d%d", &u, &v);
    e[b(u - 1, e)] = b(v - 1, e);
  }

  if(n != m + 1){
    puts("No");
    return (0);
  }

  c = b(0, e);

  for(int i = 1; i < n; i++){
    if(c != b(i, e)){
      puts("No");
      return (0);
    }
  }

  puts("Yes");
  return (0);
}