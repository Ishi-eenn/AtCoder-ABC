#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, w, cnt = 0;;
	cin >> h >> w;
	vector<string> s(h);
	for(int i = 0; i < h; i++){
		cin >> s[i];
		cnt += count(s[i].begin(), s[i].end(), '#');
	}
	cout << cnt << endl;
	return (0);
}
