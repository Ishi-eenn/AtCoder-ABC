#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, num[] = {1, 2, 4, 8}, sum = 0, judge = 0;
	vector<int> ans;
	cin >> n;
	while(judge != 1){
		for(int i = 0; i < 4; i++)
			if(sum + num[i] <= n){
				sum += num[i];
				ans.push_back(num[i]);
			}
			if(sum == n)
				judge = 1;
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return (0);
}
