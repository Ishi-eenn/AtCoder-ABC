#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, w;

	cin >> h >> w;
	vector<vector<char>> a(h, vector<char>(w)),b(h, vector<char>(w));

	for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++)
			cin >> a[i][j];

	for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++)
			cin >> b[i][j];
	return (0);
}
