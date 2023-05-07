#include <stdio.h>
#define N 9

int main(void){
  char str[N];

  for(int i = 0; i < N - 1; i++){
    scanf("%c", &str[i]);
  }

  if('A' <= str[0] && str[0] <= 'Z'){
    if('1' <= str[1] && str[1] <= '9'){
      for(int i = 2; i < N - 2; i++){
        if(str[i] < '0' || '9' < str[i]){
          printf("No\n");
          return (0);
        }
      }
      if('A' <= str[7] && str[7] <= 'Z')
        printf("Yes\n");
      else
        printf("No\n");
    } else
      printf("No\n");
  } else
    printf("No\n");
  
  return (0);
}