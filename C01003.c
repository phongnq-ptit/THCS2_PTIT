#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n;
	scanf("%d", &n);
	unsigned long long kq = (unsigned long long) n*n;
	printf("%lld\n", kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
