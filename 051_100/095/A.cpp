#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	cout << 700 + 100 * count(s.begin(), s.end(), 'o') << endl;
	return (0);
}
