#include <stdio.h>
#define N 100000

int main(void){
  int n, A[N], cnt = 0;
  long long t, time = 0, sum = 0;

  scanf("%d%lld", &n, &t);
  for(int i = 0; i < n; i++){
    scanf("%d", &A[i]);
    sum += A[i];
  }

  t %= sum;
  while(t > A[cnt]){
    t -= A[cnt];
    cnt++;
  }
  printf("%d %lld\n", cnt + 1, t);
  return (0);
}