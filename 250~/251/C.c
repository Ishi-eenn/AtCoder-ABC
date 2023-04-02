#include <stdio.h>
#include <string.h>
#define M 1000001
#define N 100001

int main(void){
	int n, max = -1, ans = -1, t[N];
	char s[N][15], list[M];
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		int len;
		scanf("%s %d", s[i], &t[i]);
		len = strlen(s[i]);
		s[i][len] = ' ';
		if(strstr(list, s[i]) == NULL){
			if(max < t[i]){
				max = t[i];
				ans = i + 1;
			}
		}
		strcat(list, s[i]);
	}

	printf("%d\n", ans);
	return (0);
}