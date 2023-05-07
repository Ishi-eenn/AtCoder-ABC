#include <stdio.h>
#include <math.h>

double dist(int x1, int x2, int y1, int y2){
	double z = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	return (sqrt(z));
}

int main(void){
	int N, K, l;
	int A[1000];
	int X[1000];
	int Y[1000];
	double max = 0;
	double data[1000][1000];

	scanf("%d%d", &N, &K);
	for(int i = 0; i < K; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < N; i++){
		scanf("%d%d", &X[i], &Y[i]);
	}

	for(int i = 0; i < K; i ++){
		l = A[i] - 1;
		for(int j = 0; j < N; j++){
			data[i][j] = dist(X[j], X[l], Y[j], Y[l]);
		}
	}


	for(int i = 0; i < K; i ++){
		for(int j = 0; j < N; j++){
			if(max < data[i][j]){
				max = data[i][j];
			}
		}
	}

	// printf("%lf", max);
	// for(int i = 0; i < K; i ++){
	// 	for(int j = 0; j < N; j++){
	// 		printf("%lf  |  ", data[i][j]);
	// 	}
	// 	putchar('\n');
	// }




	printf("%lf\n", dist(X[1], X[3], Y[1], Y[3]));

	// printf("%d %d", N, K);
	// printf("\n");
	// for(int i = 0; i < K; i++){
	// 	printf("%d ", A[i]);
	// }
	// printf("\n");
	// for(int i = 0; i < N; i++){
	// 	printf("%d %d |", X[i], Y[i]);
	// }
	return (0);
}