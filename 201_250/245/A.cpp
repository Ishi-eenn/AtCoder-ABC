#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d;
	string s[] = {"Takahashi", "Aoki"};
	cin >> a >> b >> c >> d;
	if(a < c)
		cout << s[0] << endl;
	else if(a > c)
		cout << s[1] << endl;
	else{
		if(b <= d)
			cout << s[0] << endl;
		else
			cout << s[1] << endl;
	}
	return (0);
}
