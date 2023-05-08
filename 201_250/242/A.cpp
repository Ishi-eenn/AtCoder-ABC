#include <bits/stdc++.h>
using namespace std;

int main(void){
	double a, b, c, x;
	cin >> a >> b >> c >> x;
	if(x <= a)
		printf("%.10lf\n", 1.0);
	else if(x <= b)
		printf("%.10lf\n", c / (b - a));
	else
		printf("%.10lf\n", 0.0);
	return (0);
}
