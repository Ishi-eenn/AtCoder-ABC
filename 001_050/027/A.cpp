#include <bits/stdc++.h>
using namespace std;

int main(void){
	int buff;
	vector<int> l(3);
	for(int i = 0; i < 3; i++)
		cin >> l[i];
	sort(l.begin(), l.end());
	buff = l[0] * l[2];
	cout << buff / l[1] << endl;
	return (0);
}
