#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	
	int len = n, m = n - 1;
	for(i = 0; i < n; i++){
		char temp = 64 + m;
		for(j = 0; j < len; j++) printf("%c", temp++);
		len--; m--;
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

