#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int isPrime(int n){
	if(n <= 1) return 0;
	if(n <= 3) return 1;
	if(n % 2 == 0 || n % 3 == 0) return 0;
	int i;
	for(i = 5; i*i <= n; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return 0;
	}
	return 1;
}

//int isPrime(int n){
//	if(n < 2) return 0;
//	if(n == 2) return 1;
//	if(n % 2 == 0) return 0;
//	int i;
//	for(i = 3; i <= sqrt(n); i += 2){
//		if(n%i == 0) return 0;
//	}
//	return 1;
//}

int kiem_tra_tang(int n){
	int m = n/10;
	while(m != 0){
		if(m%10 >= n%10) return 0;
		m/=10; n/=10;
	}
	return 1;
}

int kiem_tra_giam(int n){
	int m = n/10;
	while(m != 0){
		if(m%10 <= n%10) return 0;
		m/=10; n/=10;
	}
	return 1;
}

void bai_lam(){
	int n,i,a,b, dem = 0;
	scanf("%d", &n);
	
	a = pow(10, n - 1);
	b = pow(10, n);
	
//	for(i = a + 1; i < b; i++){
//		if(kiem_tra(i)) dem++;
//	}

	if(n == 1){
		printf("%d\n",4);
		return;
	}
	for(i = a + 1; i < b; i+=2){
		if(isPrime(i)){
			if(kiem_tra_giam(i) || kiem_tra_tang(i)) dem++;
		}
	}
	
	printf("%d\n", dem);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

