#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, a, b, s;
	cin >> x >> a >> b;
	s = b - a;
	if(s <= 0)
		cout << "delicious" << endl;
	else if(s <= x)
		cout << "safe" << endl;
	else
		cout << "dangerous" << endl;
	return (0);
}
