#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c;
	cin >> a >> b;
	c = a / b;
	if(a % b != 0)
		c++;
	cout << c << endl;
}
