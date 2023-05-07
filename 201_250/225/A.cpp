#include <bits/stdc++.h>
using namespace std;

int factorial1(int n){
	if(n < 0)
		return (0);
	if(n == 0)
		return (1);
	return (n * factorial1(n - 1));
}

int main(void){
	int n;
	string s;
	cin >> s;
	if(s[0] == s[1] && s[1] == s[2])
		n = 3;
	else if(s[0] == s[1] || s[1] == s[2] || s[2] == s[0])
		n = 2;
	else
		n = 1;
	cout <<  factorial1(3) / factorial1(n) << endl;
	return (0);
}
