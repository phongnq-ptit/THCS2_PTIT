#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	long long n,i, max = -1;
	scanf("%lld", &n);
	for(i = 2; i <= sqrt(n); i++){
		while(n%i == 0){
			if(i > max) max = i;
			n /= i;
		}
	}
	if(n > 2 && n > max) max = n;
	printf("%lld ", max);
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
