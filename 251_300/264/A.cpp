#include <bits/stdc++.h>
using namespace std;

int main(void){
	int l, r;
	string s = "atcoder";
	cin >> l >> r;
	cout << s.substr(l - 1, r - l + 1) << endl;
	return (0);
}
