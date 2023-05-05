#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n[3], sum = 0;;
	for(int i = 0; i < 3; i++){
		cin >> n[i];
		sum += n[i];
	}
	if(sum > 21)
		cout << "bust" << endl;
	else
		cout << "win" << endl;
	return (0);
}
