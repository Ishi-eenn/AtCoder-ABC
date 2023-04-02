#include <stdio.h>
#include <math.h>

int main(void){
	int a, b, d;
	double x, y, r;
	double PI = 3.14159265358979323846;

	scanf("%d%d%d", &a, &b, &d);

	r = PI * 1.0 * d / 180;
	x = 1.0 * a * cos(r) - 1.0 * b * sin(r);
	y = 1.0 * a * sin(r) + 1.0 * b * cos(r);
	printf("%lf %lf\n", x, y);
	return (0);
}