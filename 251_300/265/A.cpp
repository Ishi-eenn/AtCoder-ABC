#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, y, n;
	cin >> x >> y >> n;
	if(3 * x < y)
		cout << n * x << endl;
	else
		cout << n / 3 * y + (n % 3) * x << endl;
	return (0);
}
