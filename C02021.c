#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j,temp = 1;
	scanf("%d", &n);
	int arr[n][n]; memset(arr, 0, sizeof(arr));
	
	
	for(j = 0; j < n; j++){
		for(i = j; i < n; i++){
			arr[i][j] = temp++;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			printf("%d ", arr[i][j]);
		}
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

