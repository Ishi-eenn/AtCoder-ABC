#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d;
	double aoki, takahashi;
	string s[] = {"AOKI", "TAKAHASHI", "DRAW"};
	cin >> a >> b >> c >> d;
	aoki = 1.0 * b / a;
	takahashi = 1.0 * d / c;
	if(aoki < takahashi)
		a = 0;
	else if(aoki > takahashi)
		a = 1;
	else
		a = 2;
	cout << s[a] << endl;
	return (0);
}
