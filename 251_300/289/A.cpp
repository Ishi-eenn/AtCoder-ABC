#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		cout << ((s[i] - '0') + 1) % 2;
	cout << endl;
	return (0);
}
