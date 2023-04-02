#include <stdio.h>
#include <string.h>
#define M 11
#define N 200001

typedef struct{
	char name[M];
	int count;
} li;

int main(void){
	int n, max = 1;
	int data[N] = {};
	li list[N];
	char str[N][M];

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", str[i]);
	}

	strcpy(list[0].name, str[0]);
	list[0].count = 0;
	printf("%s\n", str[0]);

	for(int i = 1; i < n; i++){
		int judge = 1, tmp = -1;
		for(int j = 0; j <= max; j++){
			judge = strcmp(str[i], list[j].name);
			if(judge == 0){
				tmp = j;
				list[tmp].count++;
				break;
			}
		}

		if(judge == 0){
			printf("%s(%d)\n", str[i], list[tmp].count);
		} else{
			printf("%s\n", str[i]);
			max++;
			strcpy(list[max].name, str[i]);
			list[max].count = 0;
		}
	}

	return (0);
}