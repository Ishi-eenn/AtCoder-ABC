#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d, cnt = 0;
	cin >> a >> b >> c >> d;
	cout<< max(0, min(b, d) - max(a, c));
	return (0);
}
