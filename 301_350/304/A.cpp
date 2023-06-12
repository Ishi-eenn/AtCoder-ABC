#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, min = 0;
	cin >> n;
	vector<string> name(n);
	vector<int> age(n);

	for(int i = 0; i < n; i++)
		cin >> name[i] >> age[i];
	for(int i = 0; i < n; i++)
		if(age[i] < age[min])
			min = i;
	for(int i = 0; i < n; i++)
		cout << name[(i + min) % n] << endl;
	return (0);
}
