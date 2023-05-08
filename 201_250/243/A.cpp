#include <bits/stdc++.h>
using namespace std;

int main(void){
	int v, a, b, c;
	vector<int> x(3);
	cin >> v;
	for(int i = 0; i < 3; i++)
		cin >> x[i];

	for(int i = 0; v >= 0; i++){
		v -= x[i % 3];
		if(v < 0){
			if(i % 3 == 0)
				cout << "F" << endl;
			else if(i % 3 == 1)
				cout << "M" << endl;
			else
				cout << "T" << endl;
		}
	}
	return (0);
}
