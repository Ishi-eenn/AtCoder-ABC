#include <bits/stdc++.h>
using namespace std;

int main(void){
	string o, e;
	cin >> o >> e;
	for(int i = 0; i < e.length(); i++)
		cout << o[i] << e[i];
	if(o.length() > e.length())
		cout << o[o.length() - 1];
	cout << endl;
	return (0);
}
