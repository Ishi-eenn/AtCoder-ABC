#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt = 0;
	vector<string> s(12);
	for(int i = 0; i < 12; i++)
		cin >> s[i];
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < s[i].size(); j++)
			if(s[i][j] == 'r'){
				cnt++;
				break;
			}
	cout << cnt << endl;
	return (0);
}
