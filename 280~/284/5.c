#include <stdio.h>

struct data{
  long long p, q;
};
typedef struct data DATA;

DATA ans(long long n){
  DATA ans;
  for(int i = 2; i * i <= n; i++){
    if(n % i != 0)
      continue;
    int e = 0;
    while (n % i == 0){
      ++e;
      n /= i;
    }
    ans.p = i;
  }
  ans.q = n;
  return ans;
}

int main(void){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    long long a;
    DATA c;
    scanf("%lld", &a);
    c = ans(a);
    printf("%lld %lld\n", c.p, c.q);
  }
  return (0);
}