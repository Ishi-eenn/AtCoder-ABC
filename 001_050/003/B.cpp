#include <bits/stdc++.h>
using namespace std;

int main(void){
	int judge = 1;
	string s, t, a = "atcoder";
	cin >> s >> t;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '@'){
			judge = 0;
			for(int j = 0; j < a.length(); j++)
				if(t[i] == a[j])
					judge = 1;
			if(t[i] == '@')
				judge = 1;
			if(judge == 0){
				cout << "You will lose" << endl;
				return (0);
			}
		} else if(t[i] == '@'){
			judge = 0;
			for(int j = 0; j < a.length(); j++)
				if(s[i] == a[j])
					judge = 1;
			if(s[i] == '@')
				judge = 1;
			if(judge == 0){
				cout << "You will lose" << endl;
				return (0);
			}
		} else if(s[i] != t[i]){
			cout << "You will lose" << endl;
			return (0);
		}
	}
	cout << "You can win" << endl;
	return (0);
}
