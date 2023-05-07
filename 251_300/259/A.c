#include <stdio.h>

int main(void){
	int n,m,x,t,d, ans;
	scanf("%d%d%d%d%d", &n, &m, &x, &t, &d);

	if(x < m)
		m = x;
	printf("%d\n", t - x * d + m * d);
	return (0);
}