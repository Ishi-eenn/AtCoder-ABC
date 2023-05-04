#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, n, i;
	cin >> a >> b >> n;
	for(i = n; ((i % a != 0) || (i % b != 0)); i++);
	cout << i << endl;
	return (0);
}
