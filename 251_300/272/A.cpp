#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, sum = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	cout << sum << endl;
	return (0);
}
