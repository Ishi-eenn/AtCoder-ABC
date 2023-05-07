#include <stdio.h>
#define M 200000

int main(void){
	char s[M], t[M];
	scanf("%s%s", s, t);


	int a = 0, i = 0, j = 0;
	while(t[j] != '\0'){
		if(s[i] == t[j]){
			i++;
			j++;
		}else if(s[i - 1] == s[i - 2]){
			i--;
		} else{
			a = 1;
			break;
		}
	}

	if(a == 0)
		puts("Yes");
	else
		puts("No");
	return (0);
}