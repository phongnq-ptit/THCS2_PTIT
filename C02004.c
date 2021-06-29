#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	int temp = n - 1;
	i = 0;
	while(i < n){
		for(j = 0; j < temp; j++) printf("~");
		if(i != n - 1 && i != 0){
			printf("*");
			for(j = 1; j < n - 1; j++) printf(".");
			printf("*");
		} else{
			for(j = 0; j < n; j++) printf("*");
		}
		printf("\n");
		temp--; i++;
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

