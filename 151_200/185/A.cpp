#include <bits/stdc++.h>
using namespace std;

int main(void){
	int sum = 101;
	vector<int> a(4);
	for(int i = 0; i < 4; i++){
		cin >> a[i];
		sum = min(sum, a[i]);
	}
	cout << sum << endl;
	return (0);
}
