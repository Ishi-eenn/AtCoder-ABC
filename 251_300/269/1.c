#include <stdio.h>
#include <string.h>
#define N 11

int main(void){
	int a, b, c, d, judge[5] = {};
	char in[N][N];

	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N; j++){
			scanf("%c", &in[i][j]);
		}
	}

	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - 1; j++){
			if(in[i][j] == '#' && judge[0] == 0){
				judge[0]++;
				a = i + 1;
				c = j + 1;
			}
			if(in[i][j] == '.' && judge[0] == 1 && judge[1] == 0){
				judge[1]++;
				d = j;
				break;
			}
			if(i == N - 2 && j == N - 2){
				d = 0;
			}
		}
		if(judge[1] == 1){
			break;
		}
	}

	for(int i = a; i < 10; i++){
		if(in[i][c - 1] == '.' && judge[2] == 0){
			judge[2]++;
			b = i;
			break;
		}
		if(i == 9){
			b = 10;
		}
	}


	// for(int i = 0; i < N - 1; i++){
	// 	for(int j = 0; j < N - 1; j++)
	// 		printf("%c", in[i][j]);
	// 	printf("\n");
	// }

	if(d == 0){
		d = 10;
	}
	printf("%d %d\n%d %d\n", a, b, c, d);
	return (0);
}