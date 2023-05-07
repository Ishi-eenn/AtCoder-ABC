#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if(a > b)
		cout << "Takahashi" << endl;
	else if(a < b)
		cout << "Aoki" << endl;
	else
		if(c == 1)
			cout << "Takahashi" << endl;
		else
			cout << "Aoki" << endl;
	return (0);
}
