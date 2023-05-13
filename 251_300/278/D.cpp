#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, q, buff = 0;
	cin >> n;
	vector<long long> a(n+1);
	map<int, long long> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		m[i] = a[i];
	}

	cin >> q;
	for(int i = 0; i < q; i++){
		int q, b, c;
		cin >> q;
		if(q == 1){
			cin >> c;
			buff = c;
			m.clear();
		}
		else if(q == 2){
			cin >> b >> c;
			m[b] += c;
		}
		else{
			cin >> b;
			cout << buff + m[b] << endl;
		}
	}
	return (0);
}
