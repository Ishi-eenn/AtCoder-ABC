#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, k;
	cin >> n >> k;
	vector<int> a(n + k);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = k; i < n + k; i++){
		if(i != k)
			cout << " ";
		cout << a[i];
	}
	cout << endl;
	return (0);
}
