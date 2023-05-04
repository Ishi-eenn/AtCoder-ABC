#include <bits/stdc++.h>
using namespace std;

int main(void){
	int w, a, b, c;
	cin >> w >> a >> b;
	if(a <= b && b <= a + w)
		c = 0;
	else if(a + w < b)
		c = b - (a + w);
	else
		c = a - (b + w);
	cout << c << endl;
	return (0);
}
