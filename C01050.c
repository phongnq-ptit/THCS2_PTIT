#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,m,p,i,j;
	scanf("%d%d",&n,&m);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(i == 0 || i == m - 1 || j == 0 || j == n -1){
				printf("*");
			} else printf(" ");
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

