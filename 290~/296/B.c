#include <stdio.h>

int main(void){
  char bord[8][8];
  for(int i = 0; i < 8; i++)
    for(int j = 0; j < 8; j++)
      scanf(" %c", &bord[i][j]);
  
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++){
      if(bord[i][j] == '*'){
        printf("%c%d\n", j + 'a', 8 - i);
      return (0);
      }
    }
  }
}