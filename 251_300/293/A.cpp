#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i+= 2)
		swap(s[i], s[i + 1]);
	cout << s << endl;
	return (0);
}
