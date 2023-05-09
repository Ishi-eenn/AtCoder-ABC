#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, j = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			if(j == 1)
				cout << " ";
			cout << a[i];
			j = 1;
		}
	}
	cout << endl;
	return (0);
}
