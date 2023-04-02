#include <stdio.h>
#define N 100

int main(void){
	int l1, l2, r1, r2, count = 0;
	int data[N] = {};

	scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
	for(int i = l1; i < r1; i++){
		data[i]++;
	}
	for(int i = l2; i < r2; i++){
		data[i]++;
	}
	for(int i = 0; i < N; i++){
		if(data[i] == 2){
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}