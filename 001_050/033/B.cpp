#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, sum = 0;
	cin >> n;
	vector<string> s(n);
	vector<int> p(n);
	for(int i = 0; i < n; i++){
		cin >> s[i] >> p[i];
		sum += p[i];
	}

	for(int i = 0; i < n; i++)
		if(p[i] * 2 > sum){
			cout << s[i] << endl;
			return (0);
		}
	cout << "atcoder" << endl;
	return (0);
}
