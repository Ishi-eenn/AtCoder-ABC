#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, ans = 1;
	cin >> n;
	for(int i = 1; pow(2, i) <= n; i++)
		ans = pow(2, i);

	cout << ans << endl;
	return (0);
}
