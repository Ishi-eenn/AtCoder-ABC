#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 200000

int main(){
  int n, x;
  long long a[N];

  scanf("%d%d", &n, &x);
  if(x == 0){
    puts("Yes");
    return (0);
  }
  for(int i = 0; i < n; i++)
      scanf("%lld", &a[i]);
  
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if((a[i] - a[j]) == x || (a[i] - a[j]) == -x){
        puts("Yes");
        return (0);
      }
    }
  }
  puts("No");
  return (0);
}