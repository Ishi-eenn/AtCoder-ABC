#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	cout << count(s.begin(), s.end(), '+') - count(s.begin(), s.end(), '-') << endl;
	return (0);
}
