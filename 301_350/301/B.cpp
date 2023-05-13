#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];

	cout << a[0];
	for(int i = 0; i < n - 1; i++){
		if(a[i] < a[i + 1])
			for(int j = a[i] + 1; j <= a[i + 1]; j++)
				cout << " " << j;
		else
			for(int j = a[i] - 1; j >= a[i + 1]; j--)
				cout << " " << j;
	}
	cout << endl;
	return (0);
}
