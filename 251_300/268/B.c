#include <stdio.h>
#include <string.h>
#define N 101

int main(void){
	int max, count = 0;
	char str[N], prefix[N];

	scanf("%s %s", prefix, str);
	max = strlen(prefix);

	for(int i = 0; i < max; i++){
		if(str[i] == prefix[i]){
			count++;
		}
	}

	if(count == max){
		puts("Yes");
	} else{
		puts("No");
	}
	return (0);
}