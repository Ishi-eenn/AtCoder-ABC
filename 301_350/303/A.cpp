#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	string s, t;
	cin >> n >> s >> t;
	for(int i = 0; i < n; i++){
		if(s[i] == '1')
			s[i] = 'l';
		if(s[i] == '0')
			s[i] = 'o';
		if(t[i] == '1')
			t[i] = 'l';
		if(t[i] == '0')
			t[i] = 'o';
	}
	cout << ((s == t) ? "Yes" : "No") << endl;
	return (0);
}
