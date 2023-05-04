#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, x;
	cin >> n >> x;
	if(x - 1 < n - x)
		cout << x - 1 << endl;
	else
		cout << n - x << endl;
	return (0);
}
