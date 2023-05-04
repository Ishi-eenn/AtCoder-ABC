#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d;
	cin >> a >> b >> c;
	if(a > b)
		d = b;
	else
		d = a;
	cout << c / d << endl;
	return (0);
}
