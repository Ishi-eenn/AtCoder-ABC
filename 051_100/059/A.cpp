#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<string> s(3);
	for(int i = 0; i < 3; i++){
		cin >> s[i];
		s[i][0] -= 'a' - 'A';
		cout << s[i][0];
	}
	cout << endl;
	return (0);
}
