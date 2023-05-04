#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, max;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	max = a[0];
	for(int i = 1; i < n; i++){
		if(max > a[i]){
			cout << a[i] << endl;
			return (0);
		}
	}
	cout << max << endl;
	return (0);
}
