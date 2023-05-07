#include <stdio.h>
#define N 200001
#define M 1001

void swap_int(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

/*大人かどうかと体重*/
typedef struct{
	int judge, weight;
} data;

int main(void){
	int n, count, max = 0;
	char s[N];
	data a[N];

	scanf("%d", &n);
	scanf("%s", s);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i].weight);
	}

	/*大人かどうかをint型にした*/
	for(int i = 0; i < n; i++){
		a[i].judge = s[i] - '0';
	}

	//so-to 
	

	/*x=0~1000kgまでの中でf(x)を判断*/
	for(int i = 0; i < 1000; i++){
		count = 0;
		for(int j = 0; j < n; j++){
			if(a[j].judge == 1){
				if(a[j].weight >= i){
					count++;
				}
			} else{
				if(a[j].weight < i){
					count++;
				}
			}
		}
		if(max < count){
			max = count;
		}
	}
	printf("%d\n", max);
	return (0);
}