#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, m;
	cin >> a >> b;
	m = max(a + b, a - b);
	cout << max(m, a * b) << endl;
	return (0);
}
