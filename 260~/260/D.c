#include <stdio.h>
#define N 200001

int main(void){
	int n, k;
	int p[N], a[N] = {0}, b[N] = {0};

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &p[i]);
	}

	for(int i = 0; i < n; i++){
		int l = 0;
		a[p[i]]++;
		if(a[p[i]] == k){
			b[p[i]] = i + 1;
			l = 1;
		}
		for(int j = 0; j < n; j++){
			if(p[i] > p[j]){
				if(l == 0){
					a[p[j]]++;
				}else {
					a[p[j]] = 0;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(b[i] == 0){
			b[i] = -1;
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d\n", b[i]);
	}
	return (0);
}