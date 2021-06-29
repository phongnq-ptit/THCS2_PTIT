#include<stdio.h>

int test = 1;
void bai_lam(){
	int n,m,i,j,k = 0,len = 1;
	scanf("%d", &n);
	
	//tao ma tran goc
	m = n;
	int arr[n][m];
	for(i = 0; i < n; i++){
		int temp = 1;
		for(j = 0; j < len; j++) arr[i][j] = temp++;
		for(j = len; j < m; j++) arr[i][j] = 0;
		len++;
	}
	
	// ma tran chuyen vi
	int arr_cv[m][n]; 
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			arr_cv[i][j] = arr[j][i];
		}
	}
	
	//nhan 2 ma tran
	int kq[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			kq[i][j] = 0;
			for(k = 0; k < m; k++){
				kq[i][j] = kq[i][j] + arr[i][k]*arr_cv[k][j];
			}
		}
	}
	
	// in ma tran ket qua
	printf("Test %d:\n", test++);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", kq[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
}
