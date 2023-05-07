#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	cout << s;
	if(s[s.length() - 1] == 's')
		cout << "es" << endl;
	else
		cout << "s" << endl;
	return (0);
}
