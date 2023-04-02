#include <stdio.h>
#define N 301
#define M 1000001

int main(void){
	int n, w, buff, num[M] = {}, count = 0;
	int a[N];
	
	scanf("%d%d", &n, &w);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

//1つの場合
	for(int i = 0; i < n; i++){
		if(a[i] <= w){
			buff = a[i];
			num[buff]++; //配列に入れずにcount++すると同じ値があった場合重複する.
		}
	}

//2つの場合
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] + a[j] <= w){
				buff = a[i] + a[j];
				num[buff]++;
			}
		}
	}

//3つの場合
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 1; j++){
			for(int k = j + 1; k < n; k++){
				if(a[i] + a[j] + a[k] <= w){
					buff = a[i] + a[j] + a[k];
					num[buff]++;
				}
			}
		}
	}

	for(int i = 0; i < w + 1; i++){
		if(num[i] > 0){
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}