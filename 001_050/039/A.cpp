#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, s;
	cin >> a >> b >> c;
	s = a * b + b * c + c * a;
	cout << s * 2 << endl;
	return (0);
}
