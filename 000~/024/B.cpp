#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, t, sum;
	cin >> n >> t;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sum = n * t;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i - 1] < t)
			sum -= t - (a[i] - a[i - 1]);
	}
	cout << sum << endl;
	return (0);
}
