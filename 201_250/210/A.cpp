#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a, x, y;
	cin >> n >> a >> x >> y;
	if(n > a)
		cout << x * a + (n - a) * y << endl;
	else
		cout << n * x << endl;
	return (0);
}
