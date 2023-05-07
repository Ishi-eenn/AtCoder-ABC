#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a = 0, b = 0, sa, sb;
	cin >> sa >> sb;
	for(int i = 0; sa > 0; i++){
		a += sa % 10;
		sa /= 10;
	}
	for(int i = 0; sb > 0; i++){
		b += sb % 10;
		sb /= 10;
	}
	if(a > b)
		cout << a << endl;
	else
		cout << b << endl;
	return (0);
}
