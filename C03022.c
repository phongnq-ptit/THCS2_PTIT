#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i += 2){
		if(n%i == 0) return 0;
	}
	return 1;
}

int tong_chu_so(int n){
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	return (sum % 5 == 0) ? 1 : 0;
}

void bai_lam(){
	int n,i,dem = 0;
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(isPrime(i) && tong_chu_so(i)){
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

