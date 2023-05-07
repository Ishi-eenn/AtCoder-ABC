#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	if(count(s.begin(), s.end(), 'A') == 3 || count(s.begin(), s.end(), 'B') == 3)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return (0);
}
