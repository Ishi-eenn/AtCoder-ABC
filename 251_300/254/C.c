#include <stdio.h>
#include <string.h>

int SortBubble(int array[], int n){
	int i, temp;
	for (i = 0; i < n - 1; i++){
		if(array[i + 1] < array[i]){
			return (1);
		}
	}
	return (0);
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int sort(int A[], int B[], int N, int K){
	int i, count, judge = SortBubble(B, N);
	if(judge == 1){
		for(i = 0; i < N - K; i++){
			swap(&A[i], &A[i + K]);
			for(int j = 0; j < N; j++){
				B[j] = A[j];
			}
			judge = SortBubble(B, N);
			if(judge == 0){
				return (0);
			}
		}
	} else{
		return (0);
	}
	return (1);
}

int main(void){
	int N, K, num;
	scanf("%d%d", &N, &K);

	int A[N], B[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
		B[i] = A[i];
	}
	num = sort(A, B, N, K);
	if(num == 0){
		puts("Yes");
	} else{
		puts("No");
	}
	return (0);
}