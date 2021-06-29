#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i, m = n/10;
	while(m != 0){
		if(m%10 > n%10) return 0;
		m /= 10; n /= 10;
	}
	return 1;
}

void bai_lam(){
	int n,i,a,b;
	scanf("%d", &n);
	
	a = pow(10, n - 1);
	b = pow(10, n);
	
	for(i = a; i < b; i++){
		if(kiem_tra(i)) printf("%d ", i);
	}
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

