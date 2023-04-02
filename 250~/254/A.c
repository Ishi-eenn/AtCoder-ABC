#include <stdio.h>

//回答
int main(void){
	int num;
	scanf("%d", &num);
	if((num % 100) > 10){
		printf("%d\n", num%100);
	} else {
		printf("0%d\n", num%100);
	}
	return (0);
}

//模範回答
// int main(void){
// 	int n;
// 	scanf("%d", &n);
// 	printf("%d%d", (n%100)/10, n%10);
// 	return (0);
// }