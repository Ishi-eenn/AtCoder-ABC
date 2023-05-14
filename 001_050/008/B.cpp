#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m = -1;
	cin >> n;
	string ans;
	map<string, int> a;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		a[s]++;
		if(m < a[s]){
			ans = s;
			m = a[s];
		}
	}

	cout << ans << endl;
	return (0);
}
