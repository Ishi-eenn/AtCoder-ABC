#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		s[i] -= 32;
	cout << s << endl;
	return (0);
}
