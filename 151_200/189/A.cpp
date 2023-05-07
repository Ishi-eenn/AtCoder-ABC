#include <bits/stdc++.h>
using namespace std;

int main(void){
	string c;
	cin >> c;
	sort(c.begin(), c.end());
	if(c[0] == c[2])
		cout << "Won" << endl;
	else
		cout << "Lost" << endl;
	return (0);
}
