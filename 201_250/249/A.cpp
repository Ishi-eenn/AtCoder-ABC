#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, x_buff, ta, aa;
	vector<int> t(3), a(3);
	for(int i = 0; i < 3; i++)
		cin >> t[i];
	for(int i = 0; i < 3; i++)
		cin >> a[i];
	cin >> x;
	x_buff = x;
	ta = x / (t[0] + t[2]) * t[0] * t[1];
	x %= (t[0] + t[2]);
	if(x < t[0])
		ta += x * t[1];
	else
		ta += t[0] * t[1];

	x = x_buff;
		aa = x / (a[0] + a[2]) * a[0] * a[1];
	x %= (a[0] + a[2]);
	if(x < a[0])
		aa += x * a[1];
	else
		aa += a[0] * a[1];

	if(ta > aa)
		cout << "Takahashi" << endl;
	else if(ta < aa)
		cout << "Aoki" << endl;
	else
		cout << "Draw" << endl;
	return (0);
}
