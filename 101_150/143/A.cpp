#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if(a < 2 * b)
		cout << 0;
	else
		cout << a - 2 * b;
	cout << endl;
	return (0);
}
