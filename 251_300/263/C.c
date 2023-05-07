#include <stdio.h>
#include <math.h>

int main(void){
	int n, m, a;
	int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	scanf("%d%d", &n, &m);
	a = m - n;
	for(int i = 0; i <= a; i++){//0
		if(n == 1){
			printf("%d\n", data[i]);
		}
		for(int j = i + 1; j <= a + 1; j++){//1
			if(n == 2){
				printf("%d %d\n", data[i], data[j]);
			}
			for(int k = j + 1; k <= a + 2; k++){//2
				if(n == 3){
					printf("%d %d %d\n", data[i], data[j], data[k]);
				}
				for(int l = k + 1; l <= a + 3; l++){//3
					if(n == 4){
						printf("%d %d %d %d\n", data[i], data[j], data[k], data[l]);
					}
					for(int o = l + 1; o <= a + 4; o++){//4
						if(n == 5){
							printf("%d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o]);
						}
						for(int p = o + 1; p <= a + 5; p++){//5
							if(n == 6){
								printf("%d %d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o], data[p]);
							}
							for(int q = p + 1; q <= a + 6; q++){//6
								if(n == 7){
									printf("%d %d %d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o], data[p], data[q]);
								}
								for(int r = q + 1; r <= a + 7; r++){//7
									if(n == 8){
										printf("%d %d %d %d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o], data[p], data[q], data[r]);
									}
									for(int s = r + 1; s <= a + 8; s++){//8
										if(n == 9){
											printf("%d %d %d %d %d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o], data[p], data[q], data[r], data[s]);
										}
										for(int t = s + 1; t <= a + 9; t++){//9
											if(n == 10){
												printf("%d %d %d %d %d %d %d %d %d %d\n", data[i], data[j], data[k], data[l], data[o], data[p], data[q], data[r], data[s], data[t]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (0);
}