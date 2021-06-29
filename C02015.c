#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j, temp = 1;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= temp; j++){
			printf("%d",j);
		}
		temp += 2;
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

