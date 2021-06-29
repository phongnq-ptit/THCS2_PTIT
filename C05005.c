#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int test = 1;
void bai_lam(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Test %d:\n", test++);
	for(i = 1; i < n; i++){
		for(j = 1; j < m; j++){
			printf("%d ", arr[i][j]);
		} 
		printf("\n");
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

