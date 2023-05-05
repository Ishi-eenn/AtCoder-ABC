#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, a = "abc";
	cin >> s;
	sort(s.begin(), s.end());
	if(s == a)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
