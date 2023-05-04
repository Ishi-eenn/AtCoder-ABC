#include <bits/stdc++.h>
using namespace std;

int main(void){
	vector<int> n(2), a(2);
	for(int i = 0; i < 2; i++){
		cin >> n[i];
		if(n[i] == 1 || n[i] == 3 || n[i] == 5
		|| n[i] == 7 || n[i] == 8 || n[i] == 10 || n[i] == 12)
			a[i] = 1;
		if(n[i] == 4 || n[i] == 6 || n[i] == 9 || n[i] == 11)
			a[i] = 2;
		if(n[i] == 2)
			a[i] == 3;
	}
	if(a[0] == a[1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
