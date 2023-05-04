#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, sum = 1;
	cin >> n;
	for(int i = 2; i <= n; i++)
		sum += i;
	cout << sum << endl;
	return (0);
}
