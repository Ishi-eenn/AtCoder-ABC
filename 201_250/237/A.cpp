#include <bits/stdc++.h>
using namespace std;

int main(void){
	long long n;
	cin >> n;
	if(-pow(2, 31) <= n && n < pow(2, 31))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
