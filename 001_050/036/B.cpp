#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; i++)
		cin >> s[i];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << s[n - 1 - j][i];
		cout << endl;
	}
	return (0);
}
