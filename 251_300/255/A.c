#include <stdio.h>

int main(void){
	int R, C;
	int A[2][2];
	scanf("%d%d", &R, &C);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("%d", A[R - 1][C - 1]);
	return (0);
}