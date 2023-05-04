#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt;
	vector<int> s(3);
	for(int i = 0; i < 3; i++)
		cin >> s[i];

	for(int i = 0; i < 3; i++){
		cnt = 1;
		for(int j = 0; j < 3; j++){
			if(s[i] < s[j])
				cnt++;
		}
		cout << cnt << endl;
	}
	return (0);
}
