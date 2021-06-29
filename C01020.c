#include<stdio.h>
#include<math.h>
#include<string.h>

unsigned long long giai_thua(int n){
	unsigned long long kq = 1,i;
	for(i = 1; i <= n; i++){
		kq *= i;
	}
	return kq;
}

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	unsigned long long kq = 0;
	for(i = 1; i <= n; i++){
		kq += giai_thua(i);
	}
	printf("%lld", kq);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

