#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, k, sum = 0;
	cin >> n >> k;
	vector<int> l(n);
	for(int i = 0; i < n; i++)
		cin >> l[i];
	sort(l.begin(), l.end(), greater<int>());
	for(int i = 0; i < k; i++)
		sum += l[i];
	cout << sum << endl;
	return (0);
}
