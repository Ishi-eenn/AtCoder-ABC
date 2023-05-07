#include <stdio.h>

int main(){
  int n;
  char s[100];
  scanf("%d", &n);
  scanf("%s", s);

  for(int i = 1; i < n; i++){
    if(s[i] == s[i - 1]){
      puts("No");
      return (0);
    }
  }
  puts("Yes");
  return (0);
}