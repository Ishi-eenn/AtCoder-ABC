#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, r;
	cin >> s;
	r = s;
	reverse(r.begin(), r.end());
	if(s == r)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
