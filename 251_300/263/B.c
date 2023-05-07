#include <stdio.h>
#define N 55

int main(void){
	int n, p[N], k, count = 0;

	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		scanf("%d", &p[i]);
	}

	k = n;
	while(k != 1){
		k = p[k];
		count++;
	}
	printf("%d\n", count);
	return (0);
}