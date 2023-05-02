#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b;
	c = a % b;
	if(c == 0)
		c = b;
	cout << b - c << endl;
	return (0);
}
