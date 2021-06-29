#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	char arr[n][n]; memset(arr,(char) 64, sizeof(arr));
	
	char temp = 65;
	for(j = 0; j < n; j++){
		for(i = j; i < n; i++){
			arr[i][j] = temp++;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			printf("%c ", arr[i][j]);
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

