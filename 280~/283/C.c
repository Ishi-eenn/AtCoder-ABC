#include <stdio.h>
#define N 100001

int main(void){
  int i = 0, cnt = 0;
  char str[N];

  scanf("%s", str);

  while(str[i] != '\0'){
    if(str[i] == '0' && str[i + 1] == '0')
      i += 2;
    else
      i++;
    cnt++;
  }
  printf("%d\n", cnt);
  return (0);
}