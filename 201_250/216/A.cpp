#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a;
	string s;
	cin >> s;
	a = stoi(s.substr(s.length() - 1));
	cout << s.substr(0, s.length() - 2);
	if(a >= 7)
		cout << "+";
	else if(a < 3)
		cout << "-";
	cout << endl;
	return (0);
}
