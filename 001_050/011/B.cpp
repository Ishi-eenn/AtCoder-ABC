#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(i == 0 && 'a' <= s[i] && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		if(i != 0 && 'A' <= s[i] && s[i] <= 'Z')
			s[i] += 'a' - 'A';
	}
	cout << s << endl;
	return (0);
}
