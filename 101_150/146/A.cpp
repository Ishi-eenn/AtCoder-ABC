#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, a[] ={"", "SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN"};
	cin >> s;
	for(int i = 1; i <= 7; i++)
		if(s == a[i])
			cout << i << endl;
	return (0);
}
