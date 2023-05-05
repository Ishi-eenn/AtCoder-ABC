#include <bits/stdc++.h>
using namespace std;

int main(void){
	int sum = 0;
	vector<int> n(3);
	for(int i = 0; i < 3; i++)
		cin >> n[i];
	sort(n.begin(), n.end(), greater<int>());
	for(int i = 1; i < 3; i++)
		sum += n[i - 1] - n[i];
	cout << sum << endl;
	return (0);
}
