#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, sum;

	cin >> a >> b;
	sum = a + b;
	if(sum % 2 == 1)
		sum++;
	sum /= 2;
	cout << sum << endl;
}
