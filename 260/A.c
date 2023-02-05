#include <stdio.h>

int main(void){
	char s[4];
	int a[4] = {};

	scanf("%s", s);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < i; j++){
			if(s[i] == s[j]){
				a[i]++;
				a[j]++;
			}
		}
	}

	int l = 0;
	while(l < 3){
		if(a[l] == 0){
			printf("%c\n", s[l]);
			break;
		}
		l++;
	}
	if(l == 3){
		printf("%d\n", -1);
	}
	return (0);
}