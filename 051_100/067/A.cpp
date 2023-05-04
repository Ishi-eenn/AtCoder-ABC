#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	if(a % 3 == 0)
		cout << "Possible" << endl;
	else if(b % 3 == 0)
		cout << "Possible" << endl;
	else if(c % 3 == 0)
		cout << "Possible" << endl;
	else
		cout << "Impossible" << endl;
	return (0);
}
