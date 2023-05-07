#include <stdio.h>
#define N 1001

int main(void){
	int n, judge = 1;
	char data1[N][N], data2[N][N];

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", data1[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			data2[j][i] = data1[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((data1[i][j] == '-') && !(data2[i][j] == '-')){
				judge = 0;
				break;
			}
			if((data1[i][j] == 'L' && !(data2[i][j] == 'W'))){
				judge = 0;
				break;
			}
			if((data1[i][j] == 'W' && !(data2[i][j] == 'L'))){
				judge = 0;
				break;
			}
			if((data1[i][j] == 'D' && !(data2[i][j] == 'D'))){
				judge = 0;
				break;
			}
		}
	}
	if(judge == 0){
		printf("incorrect\n");
	} else{
		printf("correct\n");
	}
	return (0);
}