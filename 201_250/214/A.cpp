#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	if(n > 211)
		cout << 8;
	else if(n > 125)
		cout << 6;
	else
		cout << 4;
	cout << endl;
	return (0);
}
