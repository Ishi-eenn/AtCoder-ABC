#include <bits/stdc++.h>
using namespace std;

int main(void){
	int l, h, n;
	cin >> l >> h >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] < l)
			cout << l - a[i] << endl;
		else if(l <= a[i] && a[i] <= h)
			cout << 0 << endl;
		else
			cout << -1 << endl;
	}
	return (0);
}
