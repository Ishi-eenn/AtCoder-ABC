#include <stdio.h>
 
int main(void){
	int N;
	scanf("%d", &N);
	unsigned long array[N + 1][N + 1];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0){
				array[i][j] = 1;
			} else if(j < i){
				array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
			} else{
				array[i][j] = array[i - 1][j - 1];
				}
			printf("%lu ", array[i][j]);
		}
		printf("\n");
	}
	return (0);
}