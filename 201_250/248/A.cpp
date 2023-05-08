#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		n += s[i] - '0';
	cout << 45 - n << endl;
	return (0);
}
