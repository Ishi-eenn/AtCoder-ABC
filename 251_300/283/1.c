#include <stdio.h>
#include <string.h>
#define N 300001

int main(void){
  int n, data[26] = {};
  char str[N];

  scanf("%s", str);

  n = strlen(str);
  for(int i = 0; str[i] != '\0'; i++){
    if('a' <= str[i] && str[i] <= 'z'){
      int num = str[i] - 'a';
      data[num]++;
      if(data[num] > 1){
        printf("No\n");
        return (0);
      }
    } else if(str[i] == ')'){
      for(int j = i - 1; str[j] != '('; j--){
        int num = str[j] - 'a';
        data[num] = 0;
      }
    }
  }

  printf("Yes\n");
  return (0);
}