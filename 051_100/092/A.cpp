#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d, sum;
	cin >> a >> b >> c >> d;
	if(a > b)
		sum = b;
	else
		sum = a;
	if(c > d)
		sum += d;
	else
		sum += c;
	cout << sum << endl;
	return (0);
}
