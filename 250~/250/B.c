#include <stdio.h>
 
int main(void){
  int N, A, B, i, j;
 
  scanf("%d %d %d", &N, &A, &B);
 
  for(i = 0; i < A * N; i++){
    for(j = 0; j < B * N; j++){
      if((i / A) % 2 == 0){
        if((j / B) % 2 == 0){
          printf(".");
        } else{
          printf("#");
        }
      } else{
        if((j / B) % 2 == 0){
          printf("#");
        } else {
          printf(".");
        }
      }
    }
    printf("\n");
  }
  return 0;
}