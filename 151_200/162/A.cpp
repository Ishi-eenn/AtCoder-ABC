#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	if(0 <= s.find_first_of('7') && s.find_first_of('7') < 3)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
