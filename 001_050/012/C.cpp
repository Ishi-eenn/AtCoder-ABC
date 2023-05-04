#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
			sum += i * j;

	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
			if(i * j == sum - n)
				cout << i << " x " << j << endl;
	return (0);
}
