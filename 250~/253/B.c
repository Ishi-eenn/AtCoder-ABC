#include <stdio.h>
#include <stdlib.h>

int main(void){
	int H, W, k = 0;
	int x[3], y[3];
	char S[101][101];

	scanf("%d %d", &H, &W);
	for(int i = 0; i < H; i++){
		scanf("%s", S[i]);
		for(int j = 0; j < W; j++){
			if(S[i][j] == 'o'){
					x[k] = i + 1;
					y[k] = j + 1;
					k ++;
			}
		}
	}
	printf("%d\n", abs(x[0] - x[1]) + abs(y[0] - y[1]));
	return (0);
}