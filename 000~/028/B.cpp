#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	vector<int> n(6);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'A')
			n[0]++;
		else if(s[i] == 'B')
			n[1]++;
		else if(s[i] == 'C')
			n[2]++;
		else if(s[i] == 'D')
			n[3]++;
		else if(s[i] == 'E')
			n[4]++;
		else
			n[5]++;
	}
	for(int i = 0; i < 6; i++){
		if(i != 0)
			cout << " ";
		cout << n[i];
	}
	cout << endl;
	return (0);
}
