#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	long long kq = 1;
	for(i = 2; i <= n; i++){
		int dem = 0;
		while(n%i == 0){
			dem++;
			n /= i;
		}
		if(dem > 0) kq *= i;
	}
	printf("%lld\n", kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

