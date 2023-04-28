#include <stdio.h>
#define N 200001

int main(void){
	int n, t, max = 0, count;
	int c[N], r[N];
	scanf("%d%d", &n, &t);
	for(int i = 0; i < n; i++)
		scanf("%d", &c[i]);
	for(int i = 0; i < n; i++)
		scanf("%d", &r[i]);

	for(int i = 0; i < n; i++){
		if((c[i] == t) && (max < r[i])){
			max = r[i];
			count = i + 1;
		}
	}
	if(max == 0){
		for(int i = 0; i < n; i++){
			if((c[i] == c[0]) && (max < r[i])){
				max = r[i];
				count = i + 1;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
