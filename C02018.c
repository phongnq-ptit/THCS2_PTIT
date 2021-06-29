#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	
	int m = n - 1, len = n;
	for(i = 1; i <= n; i++){
		int temp = 1;
		for(j = 1; j <= m; j++) printf("~");
		for(j = m + 1; j <= len; j++){
			if(j > n){
				temp -= 2;
				printf("%d", temp);
			} else{
				printf("%d", temp);
				temp += 2;
			}
			if(j == n) temp -= 2;
		}
		len++; m--;
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

