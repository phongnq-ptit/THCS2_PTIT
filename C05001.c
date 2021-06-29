#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", arr[j][i]);
		} 
		printf("\n");
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	// }
	return 0;
}

