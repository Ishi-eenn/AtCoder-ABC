#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, p, q, r, s, j;
	cin >> n >> p >> q >> r >> s;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	b = a;
	j = r;
	for(int i = p; i <= q; i++){
		b[i - 1] = a[j - 1];
		b[j - 1] = a[i - 1];
		j++;
	}
	for(int i = 0; i < n; i++){
		if(i != 0)
			cout << " ";
		cout << b[i];
	}
	cout << endl;
	return (0);
}
