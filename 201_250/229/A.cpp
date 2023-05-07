#include <bits/stdc++.h>
using namespace std;

int main(void){
	string a[] = {".#", "#."};
	vector<string> s(2);
	cin >> s[0] >> s[1];
	if((s[0] == a[0] && s[1] == a[1]) || (s[0] == a[1] && s[1] == a[0]))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return (0);
}
