#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,m,i,j;
	scanf("%d%d", &n, &m);
	int temp = 1;
	i = 0;
	while(i < n){
		for(j = 1; j < temp; j++) printf("~");
		if(i != n - 1 && i != 0){
			printf("*");
			for(j = 1; j < m - 1; j++) printf(".");
			printf("*");
		} else{
			for(j = 0; j < m; j++) printf("*");
		}
		printf("\n");
		temp++; i++;
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

