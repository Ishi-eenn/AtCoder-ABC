#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long a, b, c, x, mod;
	cin >> a >> b >> c;
	mod = (long long)((pow(10, 9) + 7));
	x = (a * b % mod);
	x = x * c % mod;
	cout << x  << endl;
	return (0);
}
