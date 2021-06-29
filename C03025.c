#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//int SNT[1000001];
//void isPrime(){
//	memset(SNT, 1, sizeof(SNT));
//	int i,j;
//	SNT[0] = 0;
//	SNT[1] = 0;
//	for(i = 2; i <= sqrt(1000001); i++){
//		if(SNT[i]){
//			for(j = i*2; j <= 1000000; j += i){
//				SNT[j] = 0;
//			}
//		}
//	}
//}

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

int isPrime(int n){
	if(n <= 1) return 0;
	if(n <= 3) return 1;
	if(n%2 == 0 || n%3 == 0) return 0;
	int i;
	for(i = 5; i*i <= n; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return 0;
	} 
	return 1;
}

int tong_SNT(int n){
	int i, sum = 0;
	if(isPrime(n) == 0) return 0;
	while(n != 0){
		if(n%10 != 2 && n%10 != 3 && n%10 != 7 && n%10 != 5) return 0;
		sum += n%10;
		n /= 10;
	}
	if(isPrime(sum) == 0) return 0;
	return 1;
}

void bai_lam(){
	int n,i,a,b, dem = 0;
	scanf("%d%d", &a, &b);
	
	if(a > b){
		n = a;
		a = b;
		b = n;
	}
	if(a%2 == 0 && a != 2 && a != 1) a++;
	for(i = a; i <= b; i += 2){
		if(tong_SNT(i)) dem++;
	}
	printf("%d\n", dem);
}

int main(){
	//isPrime();
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

