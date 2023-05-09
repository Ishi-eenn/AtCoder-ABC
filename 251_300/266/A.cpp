#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	string s;
	cin >> s;
	n = s.length();
	if(n % 2 == 0)
		cout << s[n / 2 - 1] << endl;
	else
		cout << s[(n + 1) / 2 - 1] << endl;
	return (0);
}
