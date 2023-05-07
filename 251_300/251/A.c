#include <stdio.h>
#include <string.h>
#define N 3

int main(void){
	int n, count = 0;
	char str[N];

	scanf("%s", str);
	n = strlen(str);

	for(int i = 0; i < 6; i++){
		printf("%c", str[i % n]);
	}
	putchar('\n');
	return (0);
}