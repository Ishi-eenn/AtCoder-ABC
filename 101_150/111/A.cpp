#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '9')
			cout << 1;
		else
			cout << 9;
	}
	cout << endl;
	return (0);
}
