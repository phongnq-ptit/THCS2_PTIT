#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,m,p,i,j;
	scanf("%d",&n);
	int temp = n - 1;
	j = 0;
	while(j < n){
		for(i = 0; i < temp; i++) printf("~");
		for(i = 0; i <= j; i++) printf("*");
		temp--; j++;
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

