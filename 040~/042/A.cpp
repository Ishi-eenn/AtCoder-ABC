#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> n(3);
	cin >> n.at(0) >> n.at(1) >> n.at(2);
	sort(n.begin(), n.end());
	if(n.at(0) == 5 && n.at(1) == 5)
		if(n.at(2) == 7){
			cout << "YES" << endl;
			return (0);
		}
	cout << "NO" << endl;
	return (0);
}
