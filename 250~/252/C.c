#include<stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	while(n > 122 && n < 97) {
		scanf("%d",&n);
	}
	char c = n;
	printf("%c",c);
}