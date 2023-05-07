#include <bits/stdc++.h>
using namespace std;

int main(void){
	string abc, bca, cab;
	cin >> abc;
	bca = abc.substr(1) + abc[0];
	cab = bca.substr(1) + bca[0];
	cout << stoi(abc) + stoi(bca) + stoi(cab) << endl;
	return (0);
}
