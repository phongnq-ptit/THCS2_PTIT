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
	
	for(i = 0; i < n; i++){
		int temp = arr[i][a - 1];
		arr[i][a - 1] = arr[i][b - 1];
		arr[i][b - 1] = temp;
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

