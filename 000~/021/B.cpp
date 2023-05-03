#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a, b, k;
	cin >> n >> a >> b >> k;
	vector<int> p(k + 1), d(n + 1);
	for(int i = 1; i <= k; i++)
		cin >> p[i];
	d[a]++;
	d[b]++;
	for(int i = 1; i <= k; i++){
		d[p[i]]++;
		if(d[p[i]] == 2){
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
	return (0);
}
