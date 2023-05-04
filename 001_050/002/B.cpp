#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int n = s.length();
	for(int i = 0; i < n; i++)
		if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o')
			cout << s[i];
	cout << endl;
	return (0);
}
