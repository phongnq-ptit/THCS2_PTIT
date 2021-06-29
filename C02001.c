#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("*");
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

