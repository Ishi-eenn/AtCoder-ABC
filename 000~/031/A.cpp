#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d;
	cin >> a >> d;
	b = (a + 1) * d;
	d = a * (d + 1);
	if(b > d)
		cout << b << endl;
	else
		cout << d << endl;
	return (0);
}
