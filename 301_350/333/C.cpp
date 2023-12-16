#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, a = 1, b = 1, c = 1, ans = 3;

	cin >> n;
	for (int i = 1; i < n; i++){
		if (a == b && b == c)
		{
			a *= 10;
			a++;
			b = 1;
			c = 1;
		} else if (b == c){
			b *= 10;
			b++;
			c = 1;
		} else {
			c *= 10;
			c++;
		}
		ans = a + b + c;
	}
	cout << ans << endl;
	return (0);
}
