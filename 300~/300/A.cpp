#include <bits/stdc++.h>
#define N 309
using namespace std;

int main(void){
	int n, a, b;

	cin >> n >> a >> b;
	vector<int> c(n);
	for(int i = 0; i < n; i++)
		cin >> c[i];

	for(int i = 0; i < n; i++)
		if(c[i] == a + b)
			cout << i + 1 << endl;
	return (0);
}
