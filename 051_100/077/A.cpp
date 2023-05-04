#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<string> s(2), r(2);
	cin >> s[0] >> s[1];
	r = s;
	for(int i = 0; i < 2; i++)
		reverse(r[i].begin(), r[i].end());
	swap(r[0], r[1]);
	if(s == r)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return (0);
}
