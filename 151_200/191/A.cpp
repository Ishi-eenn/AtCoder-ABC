#include <bits/stdc++.h>
using namespace std;

int main(void){
	int v, t, s, d;
	cin >> v >> t >> s >> d;
	if(d < t * v || s * v < d)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
