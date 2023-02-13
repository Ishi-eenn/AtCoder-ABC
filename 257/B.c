#include <stdio.h>
#define N 201
#define M 1001

int main(void){
	int n, k, q;
	int a[N], l[M];
	scanf("%d%d%d", &n, &k, &q);
	for(int i = 0; i < k; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < q; i++){
		scanf("%d", &l[i]);
	}

	for(int i = 0; i < q; i++){
		int b = 0;
		int judge = l[i] - 1;
		if(a[judge] != n){
			for(int i = 0; i < k; i++){
				if(a[judge] + 1 == a[i]){
					b = 1;
				}
			}
			if(b == 0){
				a[judge]++;
			}
		}
	}

	for(int i = 0; i < k; i++){
		printf("%d ", a[i]);
	}
	putchar('\n');
	return (0);
}