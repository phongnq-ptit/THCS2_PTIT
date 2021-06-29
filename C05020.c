#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long f[1301];
void fibo(){
	f[0] = 0;
	f[1] = 1;
	int i;
	for(i = 2; i <= 1300; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

void bai_lam(){
	fibo();
	int n,m,i,j;
	scanf("%d", &n);
	long long arr[n][n];
	memset(arr, 0, sizeof(arr));
	m = n;
	int n_copy = n;
	
	int hang = 0, cot = 0, temp = -1;
	for(i = 0; i < n; i++){
		for(j = hang; j < m; j++) arr[hang][j] = f[++temp];
		hang++;
		for(j = hang; j < n; j++) arr[j][m - 1] = f[++temp]; 
		m--;
		if(hang < n){
			for(j = m - 1; j >= cot; j--) arr[n - 1][j] = f[++temp];
			n--;
		}
		if(cot < m){
			for(j = n - 1; j >= hang; j--) arr[j][cot] = f[++temp];
			cot++;
		}
	}
	
	for(i = 0; i < n_copy; i++){
		for(j = 0; j < n_copy; j++) printf("%lld ", arr[i][j]);
		printf("\n");
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
