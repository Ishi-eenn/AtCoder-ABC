#include <stdio.h>
 
int main(void){
	int n, k;
	int A[100], B[100];
	scanf("%d %d", &n, &k);
 
	for(int i = 0; i < n; i ++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < k; i ++){
		scanf("%d", &B[i]);
	}
	
	int max = 0;
	for(int i = 0; i < n; i ++) {
		if(max < A[i]){
			max = A[i];	
		}
	}
 
	int buf[n];
	for(int i = 0; i < n; i ++) {
		buf[i] = 0;
		if(max == A[i]){
			buf[i] = 1;	
		}
	}
 
	int flag = 0;
	for(int j = 0; j < n; j ++){
		if(buf[j] != 0){
			for(int i = 0; i < k; i ++){
				if(B[i] == j+1){
					flag = 1;
				}
				if(flag == 1){
					break;
				}
			}
		}
		if(flag == 1){
			break;
		}
	}
 
	if(flag == 1){
		puts("Yes");
	} else{
		puts("No");
	}

	return (0);
}