#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,m,i,j,a,b;
	scanf("%d%d", &n, &m);
	int arr[n][m];
    for(i = 0; i < n; i++){
    	for(j = 0; j < m; j++) scanf("%d", &arr[i][j]);
	}
	scanf("%d%d", &a, &b);
	
	for(j = 0; j < m; j++){
		int temp = arr[a - 1][j];
		arr[a - 1][j] = arr[b - 1][j];
		arr[b - 1][j] = temp;
	}
	
	for(i = 0; i < n; i++){
    	for(j = 0; j < m; j++) printf("%d ", arr[i][j]);
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

