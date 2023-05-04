#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	double cnt = 0, sum = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] != 0)
			cnt++;
		sum += a[i];
	}
	cout << ceil(sum / cnt) << endl;
	return (0);
}
