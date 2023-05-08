#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> x(3), y(3);
	for(int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	if(x[1] == x[0])
		cout << x[2];
	else
		cout << x[0];
	if(y[1] == y[0])
		cout << " " << y[2] << endl;
	else
		cout << " " << y[0] << endl;
	return (0);
}
