#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, mi = 1001, ma = -1;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mi = min(mi, a[i]);
		ma = max(ma, a[i]);
	}
	cout << ma - mi << endl;
	return (0);
}
