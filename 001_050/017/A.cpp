#include <bits/stdc++.h>
using namespace std;

int main(void){
	double sum = 0;
	vector<double> s(3), e(3);
	for(int i = 0; i < 3; i++)
		cin >> s[i] >> e[i];
	for(int i = 0; i < 3; i++)
		sum += s[i] * double(e[i] / 10);
	cout << sum << endl;
	return (0);
}
