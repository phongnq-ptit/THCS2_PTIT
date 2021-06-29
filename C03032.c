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

int so_chu_so(int n){
	while(n != 0){
		int temp = n%10;
		if(!isPrime(temp)) return 0;
		n /= 10;
	}
	return 1;
}

void bai_lam(){
	int a,b,i, dem = 0;
	scanf("%d%d",&a,&b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for(i = a; i <= b; i++){
		if(isPrime(i) && so_chu_so(i)) dem++;
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

