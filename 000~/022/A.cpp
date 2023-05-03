#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, s, t, w, cnt = 0;
	cin >> n >> s >> t;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];

	for(int i = 1; i < n; i++)
		a[i] = a[i - 1] + a[i];

	for(int i = 0; i < n; i++)
		if(s <= a[i] && a[i] <= t)
			cnt++;

	cout << cnt << endl;
	return (0);
}
