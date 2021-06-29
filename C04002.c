#include<stdio.h>
#include<math.h>
#include<string.h>

int isPrime(int n){
	int i;
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	for(i = 3; i <= sqrt(n); i+=2){
		if(n%i == 0) return 0;
	}
	return 1;
}

void bai_lam(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d",&arr[i]);
	for(i = 0; i < n; i++){
		if(isPrime(arr[i])) printf("%d ", arr[i]);
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

