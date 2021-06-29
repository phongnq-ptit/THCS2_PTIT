#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i+= 2){
		if(n % i == 0) return 0;
	}
	return 1;
}

void bai_lam(){
	int n,i, dem = 0;
	scanf("%d",&n);
	for(i = 2; i <= n/2; i++){
		if(isPrime(i) && isPrime(n - i))
			printf("%d %d ", i, n - i);
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

