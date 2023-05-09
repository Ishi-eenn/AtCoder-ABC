#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < 4; i++){
		if(n % 4 == 2)
			cout << n << endl;
		n++;
	}
	return (0);
}
