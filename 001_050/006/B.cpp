#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<long long> a(4);
	a[3] = 1;
	for(int i = 4; i <= n; i++)
		a.push_back((a[i - 1] + a[i - 2] + a[i - 3]) % 10007);
	cout << a[n] << endl;
	return (0);
}
