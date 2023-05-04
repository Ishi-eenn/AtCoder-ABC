#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, cnt = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		while(a[i] % 3 == 2 || a[i] % 2 == 0){
			a[i]--;
			cnt++;
		}
	}
	cout << cnt << endl;
	return (0);
}
