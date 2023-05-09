#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	while(s.length() > 1){
		s.pop_back();
		if(s.length() % 2 == 0){
			if(s.substr(0, s.length() / 2) == s.substr(s.length() / 2, s.length() - 1)){
				cout << s.length() << endl;
				return (0);
			}
		}
	}
	cout << s << endl;
	return (0);
}
