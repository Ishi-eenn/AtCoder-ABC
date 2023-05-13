#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a = 0, t = 0;
	string s;
	cin >> n >> s;
	if(count(s.begin(), s.end(), 'T') > count(s.begin(), s.end(), 'A'))
		cout << "T" << endl;
	else if(count(s.begin(), s.end(), 'T') < count(s.begin(), s.end(), 'A'))
		cout << "A" << endl;
	else
		for(int i = 0; i < n; i++){
			if(s[i] == 'T')
				t++;
			else
				a++;
			if(t == count(s.begin(), s.end(), 'T')){
				cout << "T" << endl;
				return (0);
			} else if(a == count(s.begin(), s.end(), 'T')){
				cout << "A" << endl;
				return (0);
			}
		}
	return (0);
}
