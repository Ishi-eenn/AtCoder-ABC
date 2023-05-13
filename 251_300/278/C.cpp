#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, q;
	cin >> n >> q;
	vector<int> t(q), a(q), b(q);
	set<pair <int, int> > follow;
	for(int i = 0; i < q; i++)
		cin >> t[i] >> a[i] >> b[i];

	for(int i = 0; i < q; i++){
		if(t[i] == 1)
			follow.emplace(a[i], b[i]);
		if(t[i] == 2)
			follow.erase({a[i], b[i]});
		if(t[i] == 3){
			if(follow.count({ a[i], b[i] }) && follow.count({ b[i], a[i] }))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return (0);
}
