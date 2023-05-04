#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a = 0, m = 0;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == 'I')
			a++;
		else
			a--;
		if(a > m)
			m = a;
	}
	cout << m << endl;
	return (0);
}
