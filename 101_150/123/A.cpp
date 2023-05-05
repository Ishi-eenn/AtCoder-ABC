#include <bits/stdc++.h>
using namespace std;

int main(void){
	int k;
	vector<int> n(5);
	for(int i = 0; i < 5; i++)
		cin >> n[i];
	cin >> k;

	for(int i = 0; i < 5; i++)
		for(int j = i + 1; j < 5; j++)
			if(n[j] - n[i] > k){
				cout << ":(" << endl;
				return (0);
			}
	cout << "Yay!" << endl;
	return (0);
}
