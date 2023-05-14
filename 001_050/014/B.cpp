#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, x, ans = 0;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];

	for(int i = 0; i < n; i++)
		if((x >> i)&1)
			ans += a[i];

	cout << ans << endl;
	return (0);
}
