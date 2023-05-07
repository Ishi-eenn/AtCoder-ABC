#include <bits/stdc++.h>
using namespace std;

int main(void){
	int ans = 0;
	vector<int> a(10);
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}

	for(int i = 0; i < 3; i++)
		ans = a[ans];
	cout << ans << endl;
	return (0);
}
