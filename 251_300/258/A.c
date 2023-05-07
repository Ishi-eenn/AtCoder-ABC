#include <stdio.h>

int main(void){
	int n, m, s;
	scanf("%d", &n);
	m = n / 60;
	s = n % 60;

	printf("%d:", 21 + m);
	if(s < 10){
		printf("0%d\n", s);
	} else{
		printf("%d\n", s);
	}
	return (0);
}