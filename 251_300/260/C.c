#include <stdio.h>
#define N 11

int judge(long long r[], long long b[]){
	for(int i = 1; i < 10; i++){
		if(r[i] > 0 || b[i] > 0){
			return (1);
		}
	}
	return (0);
}

int main(void){
	int n, x, y;
	long long r[N] = {0}, b[N] = {0};

	scanf("%d%d%d", &n, &x, &y);

	r[n - 1]++;

	while(judge(r, b) != 0){
		for(int i = 9; i > 0; i--){
			if(r[i] > 0){
				int buff = r[i];
				r[i] = 0;
				r[i - 1] += buff;
				b[i] += buff * x;
			}
		}
		for(int i = 9; i > 0; i--){
			if(b[i] > 0){
				int buff = b[i];
				b[i] = 0;
				b[i - 1] += buff * y;
				r[i - 1] += buff;
			}
		}
	}

	printf("%lld\n", b[0]);
	return (0);
}