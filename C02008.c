#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,m,p,i,j;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++){
			if(j == 0 || i == n || i - j == 1){
				printf("*");
			} else printf(".");
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

