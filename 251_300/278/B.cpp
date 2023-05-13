#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, m, ans_h, ans_m;
	cin >> h >> m;

	while(1){
		ans_h = (h / 10 * 10) + (m / 10);
		ans_m = ((h % 10) * 10) + (m % 10);
		if(ans_h < 24 && ans_m < 60){
			cout << h << " " << m << endl;
			return (0);
		}
		m++;
		if (60 == m) {
			h++;
			m = 0;
		}
		if(h == 24)
			h = 0;
	}
	return (0);
}
