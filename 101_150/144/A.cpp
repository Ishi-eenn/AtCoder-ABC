#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if(a > 9 || b > 9)
		cout << -1;
	else
		cout << a * b;
	cout << endl;
	return (0);
}
