#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m, sum = 0;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	for(int i = 0; i < m; i++)
		sum += a[b[i] - 1];
	cout << sum << endl;
	return (0);
}
