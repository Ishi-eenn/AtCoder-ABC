#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, a, b;
	cin >> x >> a >> b;
	if(abs(a - x) > abs(b - x))
		cout << "B" << endl;
	else
		cout << "A" << endl;
	return (0);
}
