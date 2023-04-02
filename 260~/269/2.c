#include <stdio.h>
#define N 100

int main(void){
	int a, b, c, d, judge[5] = {};
	char in[N];

	for(int i = 0; i < N; i++){
		scanf(" %c", &in[i]);
		if(in[i] == '#' && judge[0] == 0){
			judge[0]++;
			a = i / 10;
			b = i % 10;
		}
		if(in[i] == '.' && judge[0] == 1 && judge[1] == 0){
			judge[1]++;
			c = i % 10;
		}
	}

	for(int i = 0; i < N; i++){
		printf("%c", in[i]);
		if((i + 1) % 10 == 0){
			printf("\n");
		}
	}

	if(c == 0){
		c = 9;
	}
	for(int i = a; i < 10; i++){
		for(int j = b; j <= c; j++){
			int buff = i * 10 + j;
			if(in[buff] == '.'){
				printf("aaa%d\n", buff);
				judge[2]++;
				break;
			}
		}
		if(judge[2] == 1 || i == 9){
			d = i;
			break;
		}
	}

	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	printf("%d %d\n%d %d\n", a + 1, d + 1, b + 1, c + 1);
	return (0);
}