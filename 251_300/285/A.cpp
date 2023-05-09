#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if(a == 1 && b == 3){
		cout << "Yes" << endl;
		return (0);
	}
	if(b / a == 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
