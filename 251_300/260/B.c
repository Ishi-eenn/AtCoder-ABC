#include <stdio.h>
#define N 1001


typedef struct{
	int a, b, sum, num;
} data;

void swap (data *x, data *y) {
  data temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort (data array[], int array_size, int a) {
  int i, j;

  for (i = 0; i < array_size - 1; i++){
    for (j = array_size - 1; j >= i + 1; j--){
      if (array[j].a > array[j-1].a && a == 0) {
				swap(&array[j], &array[j-1]);
			}
			if (array[j].b > array[j-1].b && a == 1) {
				swap(&array[j], &array[j-1]);
			}
			if (array[j].sum > array[j-1].sum && a == 2) {
				swap(&array[j], &array[j-1]);
			}
		}
	}
}

int main(void){
	int n, x, y, z, count;
	int j[N] = {};
	data c[N], d[N], e[N];

	scanf("%d%d%d%d", &n, &x, &y, &z);
	for(int i = 0; i < n; i++){
		scanf("%d", &c[i].a);
		c[i].num = i;
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &c[i].b);
		c[i].sum = c[i].a + c[i].b;
		d[i] = c[i];
		e[i] = c[i];
	}


	//数学
	bubble_sort (c, n, 0);
	for(int i = 0; i < x; i++){
		j[c[i].num]++;
	}

	//英語
	bubble_sort (d, n, 1);
	count = 0;
	for(int i = 0; i < n && count != y; i++){
		if(j[d[i].num] < 1){
			j[d[i].num]++;
			count++;
		}
	}

	bubble_sort (e, n, 2);
	count = 0;
	for(int i = 0; i < n && count != z; i++){
		if(j[e[i].num] < 1){
			j[e[i].num]++;
			count++;
		}
	}

	for(int i = 0; i < n; i++){
		if(j[i] > 0){
			printf("%d\n", i + 1);
		}
	}

	return (0);
}