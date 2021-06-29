#include<stdio.h>

void xoa_hang(int arr[10][10], int n, int m, int index){
	int i,j;
	for(i = index; i < n - 1; i++){
		for(j = 0; j < m; j++){
			arr[i][j] = arr[i + 1][j];
		}
	}
}

void xoa_cot(int arr[10][10], int n, int m, int index){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = index; j < m - 1; j++){
			arr[i][j] = arr[i][j + 1];
		}
	}
}

int test = 1;
void bai_lam(){
	int n,m,i,j;
	scanf("%d%d", &n, &m);
	int max_hang = -1, max_cot = -1, index;
	
	int arr[10][10];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		int sum = 0;
		for(j = 0; j < m; j++){
			sum += arr[i][j];
		}
		if(sum > max_hang){
			max_hang = sum;
			index = i;
		}
	}
	
	xoa_hang(arr, n, m, index);
	n--;
	
	for(i = 0; i < m; i++){
		int sum = 0;
		for(j = 0; j < n; j++){
			sum += arr[j][i];
		}
		if(sum > max_cot){
			max_cot = sum;
			index = i;
		}
	}
	
	xoa_cot(arr, n, m, index);
	m--;
	
	printf("Test %d:\n", test++);
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
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
