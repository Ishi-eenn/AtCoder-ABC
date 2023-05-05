#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, sum = 0;
	cin >> a >> b;
	for(int i = 0; i < 2; i++)
		if(a > b)
			sum += a--;
		else
			sum += b--;
	cout << sum << endl;
	return (0);
}
