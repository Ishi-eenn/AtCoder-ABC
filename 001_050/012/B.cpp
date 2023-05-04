#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	printf("%02d:%02d:%02d\n", n / 3600, (n / 60) % 60, n % 60);
	return (0);
}
