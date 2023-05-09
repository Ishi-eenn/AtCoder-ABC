#include <bits/stdc++.h>
using namespace std;

int main(void){
	int cnt = 0;
	string s;
	cin >> s;
	cout << count(s.begin(), s.end(), 'v') + 2 * count(s.begin(), s.end(), 'w') << endl;
	return (0);
}
