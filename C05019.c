#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i+=2){
		if(n%i == 0) return 0;
	}
	return 1;
}

int SNT[401] = {0};
void tao_mang_SNT(){
	SNT[0] = 2;
	int i,j = 1;
	for(i = 3; ; i += 2){
		if(isPrime(i)){
			SNT[j] = i;
			j++;
		}
		if(j == 400) return;
	}
}

int test = 1;
void bai_lam(){
	tao_mang_SNT();
	int n,m,i,j;
	scanf("%d", &n);
	int arr[n][n];
	memset(arr, 0, sizeof(arr));
	m = n;
	int n_copy = n;
	printf("Test %d:\n", test++);
	
	int hang = 0, cot = 0, temp = -1;
	for(i = 0; i < n; i++){
		for(j = hang; j < m; j++) arr[hang][j] = SNT[++temp];
		hang++;
		for(j = hang; j < n; j++) arr[j][m - 1] = SNT[++temp]; 
		m--;
		if(hang < n){
			for(j = m - 1; j >= cot; j--) arr[n - 1][j] = SNT[++temp];
			n--;
		}
		if(cot < m){
			for(j = n - 1; j >= hang; j--) arr[j][cot] = SNT[++temp];
			cot++;
		}
	}
	
	for(i = 0; i < n_copy; i++){
		for(j = 0; j < n_copy; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

