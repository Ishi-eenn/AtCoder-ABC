#include <bits/stdc++.h>
using namespace std;

int main(void){
	string n;
	cin >> n;
	if(n[n.length() - 1] == '0' || n[n.length() - 1] == '1'
	|| n[n.length() - 1] == '6' || n[n.length() - 1] == '8')
		cout << "pon" << endl;
	else if(n[n.length() - 1] == '3')
		cout << "bon" << endl;
	else
		cout << "hon" << endl;
	return (0);
}
