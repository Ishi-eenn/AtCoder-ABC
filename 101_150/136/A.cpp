#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if(b + c - a >= 0)
		cout << b + c - a << endl;
	else
		cout << 0 << endl;
	return (0);
}
