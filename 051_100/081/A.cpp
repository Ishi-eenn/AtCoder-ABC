#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt = 0;
	string s;
	cin >> s;
	for(int i = 0; i < 3; i++)
		if(s[i] == '1')
			cnt++;
	cout << cnt << endl;
	return (0);
}
