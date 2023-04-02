#include <stdio.h>

int main(void){
  int H,W,R,C, count = 0;
  scanf("%d%d", &H, &W);
  scanf("%d%d", &R, &C);

  if(R != 1){
    count++;
  }

  if(R != H){
    count++;
  }

  if(C != 1){
    count++;
  }
  
  if(C != W){
    count++;
  }
  
  printf("%d", count);
  return (0);
}