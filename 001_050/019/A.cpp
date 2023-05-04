#include <bits/stdc++.h>
#define m 3
using namespace std;

int main(void){
	vector<int> n(m);
	for(int i = 0; i < m; i++)
		cin >> n[i];
	sort(n.begin(), n.end());
	cout << n[1] << endl;
	return (0);
}
