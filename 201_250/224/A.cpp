#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, a[] = {"er", "ist"};
	cin >> s;
	if(s.substr(s.length() - 2) == a[0])
		cout << a[0] << endl;
	else
		cout << a[1] << endl;
	return (0);
}
