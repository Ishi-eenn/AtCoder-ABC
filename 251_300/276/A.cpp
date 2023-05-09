#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt = -1;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++)
		if(s[i] == 'a')
			cnt = i + 1;
	cout << cnt << endl;
	return (0);
}
