#include <bits/stdc++.h>
using namespace std;

int main(void){
	int w, h;
	cin >> w >> h;
	if(w % 16 == 0 && h % 9 == 0)
		cout << "16:9" << endl;
	else
		cout << "4:3" << endl;
	return (0);
}
