#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<string> s(3);
	for(int i = 0; i < 3; i++)
		cin >> s[i];
	if(s[0][s[0].length() - 1] != s[1][0]){
		cout << "NO" << endl;
		return (0);
	}
	if(s[1][s[1].length() - 1] != s[2][0]){
		cout << "NO" << endl;
		return (0);
	}
	cout << "YES" << endl;
	return (0);
}
