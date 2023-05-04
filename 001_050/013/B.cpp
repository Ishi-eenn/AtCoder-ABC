#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d, cnt1 = 0, cnt2 = 0;
	cin >> a >> b;
	c = a;
	d = b;
	while(a != b){
		if(a == 9)
			a = 0;
		else
			a++;
		cnt1++;
	}
	a = c;
	b = d;
	while(a != b){
		if(a == 0)
			a = 9;
		else
			a--;
		cnt2++;
	}
	if(cnt1 > cnt2)
		cout << cnt2 << endl;
	else
		cout << cnt1 << endl;
	return (0);
}
