#include <bits/stdc++.h>
using namespace std;

int main(void){
	double n, sum = 0, flag = 1;
	cin >> n;
	vector<int> r(n);
	for(int i = 0; i < n; i++)
		cin >> r[i];
	sort(r.begin(), r.end());
	for(int i = 0; i < n; i++){
		sum += flag * r[i] * r[i];
		flag *= -1;
	}
	printf("%.10f\n", fabs(sum) * M_PI);
	return (0);
}
