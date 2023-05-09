#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, max = -1, cnt;
	cin >> n;
	vector<int> h(n);
	for(int i = 0; i < n; i++){
		cin >> h[i];
		if(max < h[i]){
			max = h[i];
			cnt = i;
		}
	}
	cout << cnt + 1 << endl;
	return (0);
}
