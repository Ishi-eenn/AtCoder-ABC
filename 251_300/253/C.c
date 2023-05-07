#include <stdio.h>

int main(void){
	int n;
	int Q[200001], S[200001], C[200001];

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &Q[i]);
		if(Q[i] == 1){
			scanf("%d", &S[i]);
		} else if(Q[i] == 2){
			scanf("%d %d", &S[i], &C[i]);
		}
	}
	return (0);
}