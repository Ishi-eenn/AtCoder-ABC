#include <stdio.h>
#define N 101

int main(void){
	int n, P = 0, a[N], sum[N] = {};
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			sum[i] += a[j];
		}
	}

	for(int i = 0; i < n; i++){
		if(sum[i] >= 4)
			P++;
	}

	printf("%d\n", P);
	return (0);
}