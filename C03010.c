#include<stdio.h>
#include<math.h>
#include<string.h>

long long giai_thua(long long n){
	long long i, kq = 1;
	for(i = 1; i <= n; i++){
		kq *= i;
	}
	return kq;
}

int so_strong(long long n){
	long long temp = n, sum = 0;
	while(n != 0){
		sum += giai_thua(n%10);
		n /= 10;
	}
	if(sum == temp) return 1;
	else return 0;
}

void bai_lam(){
	long long n,i; scanf("%lld", &n);
	for(i = 1; i < n; i++){
		if(so_strong(i)) printf("%lld ", i);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

