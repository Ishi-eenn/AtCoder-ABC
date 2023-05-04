#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, q;
	cin >> n >> q;
	vector<int> l(q), r(q), t(q), a(n + 1);
	for(int i = 0; i < q; i++)
		cin >> l[i] >> r[i] >> t[i];
	for(int i = 0; i < q; i++){
		for(int j = l[i]; j <= r[i]; j++)
			a[j] = t[i];
	}
	for(int i = 1; i <= n; i++)
		cout << a[i] << endl;
	return (0);
}
