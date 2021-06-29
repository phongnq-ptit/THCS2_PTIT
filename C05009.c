#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,m,i,j,a,b;
	scanf("%d", &n);
	int arr[n][n];
	m = n;
    for(i = 0; i < n; i++){
    	for(j = 0; j < m; j++) scanf("%d", &arr[i][j]);
	}
	
	for(i = 0; i < n; i++){
		a = abs(n - i - 1);
		int temp = arr[i][i];
		arr[i][i] = arr[i][a];
		arr[i][a] = temp;
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

