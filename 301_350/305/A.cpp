#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	if(n % 5 == 0)
		cout << n << endl;
	else
		if(n % 5 < 3)
			cout << n - n % 5 << endl;
		else
			cout << n + (5 - n % 5) << endl;
	return (0);
}
