#include <bits/stdc++.h>
using namespace std;

int ft(int n){
	return (n * n + 2 * n + 3);
}

int main(void){
	int t;
	cin >> t;
	cout << ft(ft(ft(t) + t) + ft(ft(t))) << endl;
	return (0);
}
