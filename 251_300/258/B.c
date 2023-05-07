#include <stdio.h>
#define M 8
#define N 11


int main(void){
	int n, data[N][N];
	int dx[M] = {-1, 0, 1, -1, 1, -1, 0, 1}, dy[M] = {-1, -1, -1, 0, 0, 1, 1, 1};
	char c;
	long long buffer, max = 0;

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf(" %c", &c);
			data[i][j] = c - '0';
		}
	}


	for(int i = 0; i < M; i++){ //8方向
		for(int j = 0; j < n; j++){ //y軸
			for(int k = 0; k < n; k++){ //x軸
				int a = j, b = k;
				buffer = 0;
				for(int l = 0; l < n; l++){ //その方向に繰り返し動かす
					buffer *= 10;
					buffer += data[a][b];
					a = (a + dy[i] + n) % n;
					b = (b + dx[i] + n) % n;
				}
				if(buffer > max){
					max = buffer;
				}
			}
		}
	}

	printf("%lld\n", max);
	return (0);
}