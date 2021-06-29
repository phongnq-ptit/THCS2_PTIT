#include<stdio.h>

int menh_gia[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void bai_lam(){
	int n,m,i,j;
	scanf("%d", &n);
	
	int kq = 0;
	for(i = 9; i >= 0; i--){
		kq += (n/menh_gia[i]);
		n %= menh_gia[i];
	}
	
	printf("%d\n", kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
}
