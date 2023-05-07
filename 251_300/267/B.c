#include <stdio.h>
#include <string.h>

int main(void){
	char str[11];
	int judge = 0, num[7] = {};

	scanf("%s", str);

	if(str[0] == '1'){
		puts("No");
		return (0);
	}

	for(int i = 1; i < 10; i++){
		int m;
		if(str[i] == '1'){
			if(i == 1 || i == 7){
				m = 2;
			} else if(i == 3){
				m = 1;
			} else if(i == 6){
				m = 0;
			} else if(i == 4){
				m = 3;
			} else if(i == 8 || i == 2){
				m = 4;
			} else if(i == 5){
				m = 5;
			} else if(i == 9){
				m = 6;
			}
			num[m]++;
		}
	}

	for(int i = 1; i < 6; i++){
		if(num[i] == 0){
			int a = 0;
			for(int j = i; j > -1; j--){
				if(num[j] == 1){
					a++;
					break;
				}
			}
			for(int j = i; j < 7; j++){
				if(num[j] == 1){
					a++;
					break;
				}
			}
			if(a == 2){
				judge++;
				break;
			}
		}
	}

	if(judge == 1){
		puts("Yes");
	} else{
		puts("No");
	}
	
	return (0);
}