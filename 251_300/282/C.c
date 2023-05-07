#include <stdio.h>
#define N 200001

int main(void){
  int n, judge = 0;
  char str[N];
  scanf("%d", &n);
  scanf("%s", str);

  for(int i = 0; i < n; i++){
    if(str[i] == '"'){
      judge++;
    }
    if(judge % 2 == 0 && str[i] == ',')
      str[i] = '.';
  }

  printf("%s\n", str);
  return (0);
}