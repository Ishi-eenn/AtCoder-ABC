#include <stdio.h>

int main(void){
	int hw[6], a[3][3], ans = 0;

	for(int i = 0; i < 6; i++){
		scanf("%d", &hw[i]);
	}
	
	for(int i = 1; i <= 28; i++){
		for(int j = 1; j <= 28; j++){
			for(int k = 1; k <= 28; k++){
				for(int l = 1; l <= 28; l++){
					a[0][2] = hw[0] - i - j; //右上
					a[1][2] = hw[1] - k - l; //右中
					a[2][0] = hw[3] - i - l; //左下
					a[2][1] = hw[4] - j - k; //中下
					/*右下の条件を忘れずに*/
					if(a[0][2] > 0 && a[1][2] > 0 && a[2][0] > 0 && a[2][1] > 0 &&
						(hw[5] - a[0][2] - a[1][2]) > 0 && (hw[2] - a[2][0] - a[2][1]) > 0 &&
						(hw[5] - a[0][2] - a[1][2]) == (hw[2] - a[2][0] - a[2][1]))
						ans++;
				}
			}
		}
	}
	
	printf("%d\n", ans);
	return (0);
}