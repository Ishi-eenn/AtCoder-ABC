#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, a[] = {"Sunny", "Cloudy", "Rainy"};
	cin >> s;
	if(s == a[0])
		cout << a[1];
	else if(s == a[1])
		cout << a[2];
	else
		cout << a[0];
	cout << endl;
	return (0);
}
