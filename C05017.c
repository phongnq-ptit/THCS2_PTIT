#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,m,i,j;
	scanf("%d%d", &n, &m);
	
	int arr[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int hang = 0, cot = 0;
	while(hang < n && cot < m){
		
		for(j = hang; j < m; j++) printf("%d ", arr[hang][j]);
		hang++;
		
		for(j = hang; j < n; j++) printf("%d ", arr[j][m - 1]);
		m--;
		
		if(hang < n){
			for(j = m - 1; j >= cot; j--) printf("%d ", arr[n - 1][j]);
			n--;
		}
		
		if(cot < m){
			for(j = n - 1; j >= hang; j--) printf("%d ", arr[j][cot]);
			cot++;
		}
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

