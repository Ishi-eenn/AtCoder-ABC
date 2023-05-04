#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, cnt = 0;
	string s;
	cin >> s >> n;
	for(int i = 0; i < s.length(); i++)
		for(int j = 0; j < s.length(); j++){
			cnt++;
			if(cnt == n)
				cout << s[i] << s[j] << endl;
		}
	return (0);
}
