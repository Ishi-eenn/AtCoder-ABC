#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, t;
	cin >> s >> t;
	t.pop_back();
	if(s == t)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
