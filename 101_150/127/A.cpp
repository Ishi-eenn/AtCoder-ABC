#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if(a > 12)
		cout << b;
	else if( a >= 6)
		cout << b / 2;
	else
		cout << 0;
	cout << endl;
	return (0);
}
