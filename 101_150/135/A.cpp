#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, k;
	cin >> a >> b;
	if((b - a) % 2 == 0)
		cout << a + (b - a) / 2 << endl;
	else
		cout << "IMPOSSIBLE" << endl;
	return (0);
}
