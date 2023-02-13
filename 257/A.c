#include <stdio.h>

int main(void){
	int m, n, l, o;
	
	scanf("%d%d", &m, &n);
	l = n / m;
	o = n % m;
	if(o == 0)
		l -= 1;
	printf("%c", 'A' + l);
	return (0);
}


// int main(){
// 	int n, x;
// 	scanf("%d %d", &n, &x);
// 	printf("%c\n", (x - 1) / n + 'A');
// 	return 0;
// }