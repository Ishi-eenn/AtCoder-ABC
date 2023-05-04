#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d = 0;
	cin >> a >> b >> c;
	if(a + b == c)
		d++;
	if(a - b == c)
		d += 2;
	if(d == 0)
		cout << "!" << endl;
	else if(d == 1)
		cout << "+" << endl;
	else if(d == 2)
		cout << "-" << endl;
	else
		cout << "?" << endl;
	return (0);
}
