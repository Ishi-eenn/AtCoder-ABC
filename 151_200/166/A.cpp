#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	if(s[1] == 'R')
		s[1] = 'B';
	else
		s[1] = 'R';
	cout << s << endl;
	return (0);
}
