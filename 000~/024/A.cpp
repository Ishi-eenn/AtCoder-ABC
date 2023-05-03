#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, k, s, t, sum = 0;
	cin >> a >> b >> c >> k >> s >> t;
	sum += a * s;
	sum += b * t;
	if(s + t >= k)
		sum -= (s + t) * c;
	cout << sum << endl;
	return (0);
}
