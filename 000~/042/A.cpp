#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> n(3);
	cin >> n[0] >> n[1] >> n[2];
	sort(n.begin(), n.end());
	if(n[0] == 5 && n[1] == 5 && n[2] == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return (0);
}
