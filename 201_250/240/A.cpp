#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if(a == b + 1 || b == a + 1 || a == b - 1 || b == a - 1)
		cout << "Yes" << endl;
	else if((a == 10 && b == 1) || (b == 10 && a == 1))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
