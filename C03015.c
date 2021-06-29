#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	long long n,i, max = -1;
	scanf("%lld", &n);
	
	while(n % 2 == 0){
		max = 2;
		n /= 2;
	}
	for(i = 3; i <= sqrt(n); i += 2){
		while(n % i == 0){
			if(i > max) max = i;
			n /= i;
		}
	}
	if(n > 2 && n > max) max = n;
	printf("%lld\n", max);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

