#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt = 0, m = 0;
	string s;
	cin >> s;
	for(int i = 0; i < 3; i++)
		if(s[i] == 'R'){
			cnt++;
			m = max(m, cnt);
		} else
			cnt = 0;
	cout << m << endl;
	return (0);
}
