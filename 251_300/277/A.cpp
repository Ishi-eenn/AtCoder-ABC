#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, x, cnt;
	cin >> n >> x;
	vector<int> p(n);
	for(int i = 0; i < n; i++){
		cin >> p[i];
		if(p[i] == x)
			cnt = i + 1;
	}
	cout << cnt << endl;
	return (0);
}
