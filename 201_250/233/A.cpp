#include <bits/stdc++.h>
using namespace std;

int main(void){
	int x, y;
	cin >> x >> y;
	if(x < y)
		cout << ceil((y - x) / 10.0) << endl;
	else
		cout << 0 << endl;
	return (0);
}
