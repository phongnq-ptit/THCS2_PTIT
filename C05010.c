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

void bai_lam(){
	int n,i,j,sum = 0;
	scanf("%d", &n);
	int arr[n][n];
	for(i = 0; i < n; i++){
		for(j = 0;j < n; j++) scanf("%d", &arr[i][j]);
	}
	for(i = 0; i < n; i++){
		for(j = i;j < n; j++){
			if(isPrime(arr[i][j])) sum += arr[i][j];
		}
	}
	printf("%d", sum);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

