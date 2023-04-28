#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, buff, max = -1;
	string s;
	cin >> n >> s;

	for(int i = 0; i < 2; i++){
		buff = 0;
		for(int j = 0; j < n; j++){
			if(s[j] == '-'){
				if(buff > max && buff != 0)
					max = buff;
				buff = 0;
			} else
				buff++;
		}
		reverse(begin(s), end(s));
	}
	cout << max << endl;
	return (0);
}
