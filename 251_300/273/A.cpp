#include <bits/stdc++.h>
using namespace std;

int fanc(int n){
	if(n == 0 || n == 1)
		return (1);
	return (n * fanc(n - 1));
}

int main(void){
	int n;
	cin >> n;
	cout << fanc(n) << endl;
	return (0);
}
