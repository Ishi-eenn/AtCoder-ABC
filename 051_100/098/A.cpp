#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, sum;
	cin >> a >> b;
	sum = max(a - b, a + b);
	cout << max(sum, a * b) << endl;
	return (0);
}
