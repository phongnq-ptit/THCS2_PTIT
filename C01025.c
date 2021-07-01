#include<stdio.h>
#include<limits.h>

int _max(int a, int b){
	return (a >= b) ? a : b;
}

int _min(int a, int b){
	return (a >= b) ? b : a;
}

void bai_lam(){
	int min_x = INT_MAX; // toa do x nho nhat
	int max_x = INT_MIN; // toa do x lon nhat
	int min_y = INT_MAX; // toa do y nho nhat
	int max_y = INT_MIN; // toa do y lon nhat
	
	int i;
	for(i = 0; i < 4; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		min_x = _min(min_x, x);
		min_y = _min(min_y, y);
		max_x = _max(max_x, x);
		max_y = _max(max_y, y);
	}
	
	int kq = _max(max_x - min_x, max_y - min_y);
	
	printf("%d", kq * kq);
}

int main(){
	bai_lam();
	return 0;
}
