#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> h(2), w(2);
	for(int i = 0; i < 2; i++)
		cin >> h[i] >> w[i];
	if(h[0] == h[1])
		cout << "YES" << endl;
	else if(h[0] == w[1])
		cout << "YES" << endl;
	else if(h[1] == w[0])
		cout << "YES" << endl;
	else if(w[1] == w[0])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return (0);
}
