#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, a = -1;
	cin >> x;
	for(int i = 1; i <= x; i++)
		a = max(a, i * (x - i));

	cout << a << endl;
	return (0);
}
