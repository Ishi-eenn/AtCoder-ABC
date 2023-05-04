#include <bits/stdc++.h>
using namespace std;

int main(void){
	string a, b;
	cin >> a >> b;
	if(a.length() > b.length())
		cout << "GREATER" << endl;
	else if(a.length() < b.length())
		cout << "LESS" << endl;
	else if(a > b)
		cout << "GREATER" << endl;
	else if(a < b)
		cout << "LESS" << endl;
	else
		cout << "EQUAL" << endl;
	return (0);
}
