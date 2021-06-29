#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	long long n;
	scanf("%lld", &n);
	unsigned long long kq = (1 + n)*n/2;
	printf("%lld\n", kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

