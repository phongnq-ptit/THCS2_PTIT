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
	int n,i,j,index, dem, max = -1;
	scanf("%d", &n);
	int arr[n][n];
	for(i = 0; i < n; i++){
		for(j = 0;j < n; j++) scanf("%d", &arr[i][j]);
	}
	for(i = 0; i < n; i++){
		dem = 0;
		for(j = 0;j < n; j++){
			if(isPrime(arr[i][j])) dem++;
		}
		if(dem > max){
			max = dem;
			index = i;
		}
	}
	printf("%d\n", index + 1);
	for(i = 0; i < n; i++){
		if(isPrime(arr[index][i]))
			printf("%d ", arr[index][i]);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

