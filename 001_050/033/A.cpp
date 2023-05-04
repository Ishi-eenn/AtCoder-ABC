#include <bits/stdc++.h>
using namespace std;

int main(void){
	string n;
	cin >> n;
	if(n[0] == n[1] && n[0] == n[2] && n[0] == n[3])
		cout << "SAME" << endl;
	else
		cout << "DIFFERENT" << endl;
	return (0);
}
