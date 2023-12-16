#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	int s_n, t_n;

	cin >> s >> t;
	s_n = abs(s[0] - s[1]);
	t_n = abs(t[0] - t[1]);
	s_n = min(s_n, 5 - s_n);
	t_n = min(t_n, 5 - t_n);

	if (s_n == t_n)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
