#include <stdio.h>
#include <string.h>

int main(void){
	int num[5], count[5] ={};
	int n = sizeof(num) / sizeof(num[0]);

	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(num[i] == num[j]){
				count[i]++;
			}
		}
	}

	int a = 0, b = 0;
	for(int i = 0; i < n; i++){
		if(count[i] == 3){
			a++;
		} else if(count[i] == 2){
			b++;
		}
	}
	if(a > 0 && b > 0){
		puts("Yes");
	} else{
		puts("No");
	}

	return (0);
}