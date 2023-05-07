#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	string s, t, u;
	cin >> s >> t >> a >> b >> u;
	if(u == s)
		a--;
	else
		b--;
	cout << a << " " << b << endl;
	return (0);
}
