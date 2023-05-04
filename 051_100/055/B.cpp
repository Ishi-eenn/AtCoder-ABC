#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long n, ans = 1, mod = 1e9 + 7;
	cin >> n;
	for(int i = 2; i <= n; i++)
		ans = (ans * i) % mod;
	cout << ans << endl;
	return (0);
}
