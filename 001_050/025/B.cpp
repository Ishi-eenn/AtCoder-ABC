#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a, b, sum = 0;
	string ans[] = {"East", "West"};
	cin >> n >> a >> b;
	vector<string> s(n);
	vector<int> d(n);
	for(int i = 0; i < n; i++)
		cin >> s[i] >> d[i];

	for(int i = 0; i < n; i++){
		if(s[i] == ans[0]){
			if(d[i] < a)
				sum += a;
			else if(b < d[i])
				sum += b;
			else
				sum += d[i];
		} else{
			if(d[i] < a)
				sum -= a;
			else if(b < d[i])
				sum -= b;
			else
				sum -= d[i];
		}
	}

	if(sum > 0)
		cout << ans[0] << " " << sum << endl;
	else if(sum < 0)
		cout << ans[1] << " " << -sum << endl;
	else
		cout << sum << endl;
	return (0);
}
