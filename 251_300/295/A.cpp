#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	string s[] = {"and", "not", "that", "the", "you"};
	cin >> n;
	vector<string> w(n);
	for(int i = 0; i < n; i++)
		cin >> w[i];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++)
			if(w[i] == s[j]){
				cout << "Yes" << endl;
				return (0);
			}
	}
	cout << "No" << endl;
	return (0);
}
