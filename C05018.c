#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int test = 1;
void bai_lam(){
	int n,m,i,j;
	scanf("%d", &n);
	int arr[n][n];
	memset(arr, 0, sizeof(arr));
	m = n;
	int n_copy = n;
	printf("Test %d:\n", test++);
	
	int hang = 0, cot = 0, temp = n*n + 1;
	for(i = 0; i < n; i++){
		for(j = hang; j < m; j++) arr[hang][j] = --temp;
		hang++;
		for(j = hang; j < n; j++) arr[j][m - 1] = --temp; 
		m--;
		if(hang < n){
			for(j = m - 1; j >= cot; j--) arr[n - 1][j] = --temp;
			n--;
		}
		if(cot < m){
			for(j = n - 1; j >= hang; j--) arr[j][cot] = --temp;
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

