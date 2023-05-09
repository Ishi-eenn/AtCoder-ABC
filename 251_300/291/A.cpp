#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		if('A' <= s[i] && s[i] <= 'Z')
			cout << i + 1 << endl;
	return (0);
}
