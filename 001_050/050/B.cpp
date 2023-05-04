#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m;
	cin >> n;
	vector<int> t(n), ans(n);
	for(int i = 0; i < n; i++)
		cin >> t[i];
	cin >> m;
	vector<int> p(m), x(m);
	for(int i = 0; i < m; i++)
		cin >> p[i] >> x[i];

	ans[0] = t[0];
	for(int i = 1; i < n; i++)
		ans[i] = ans[i - 1] + t[i];
	for(int i = 0; i < m; i++)
		cout << ans[n - 1] - (t[p[i] - 1]  - x[i]) << endl;
	return (0);
}
