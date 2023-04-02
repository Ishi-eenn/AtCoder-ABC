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
	double max;
	double data[1000][1000];
	double min[1000];

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
		l = A[i] - 1;
		for(int j = 0; j < K; j++){
			data[i][A[j] - 1] = 0;
		}
	}

	for(int i = 0; i < N; i++){
		min[i] = 2147483647;
	}

	for(int i = 0; i < N; i ++){
		for(int j = 0; j < K; j++){
			if(min[i] > data[j][i]){
				min[i] = data[j][i];
			}
		}
	}

	max = min[0];
	for(int i = 1; i < N; i++){
		if(max < min[i]){
			max = min[i];
		}
	}

	printf("%lf", max);
	return (0);
}