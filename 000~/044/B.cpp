#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	vector<int> n(26);
	for(int i = 0; i < s.length(); i++)
		n[s[i] - 'a']++;
	for(int i = 0; i < 26; i++)
		if(n[i] % 2 != 0){
			cout << "No" << endl;
			return (0);
		}
	cout << "Yes" << endl;
	return (0);
}
