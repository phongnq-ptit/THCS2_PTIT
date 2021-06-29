#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d",&n);
	
	char temp = 96;
	for(i = 1; i<= n; i++){
		if(i % 2 == 0){
			temp += i - 1;
			for(j = 1; j <= i; j++) printf("%c ", temp--);
		} else{
			temp += i;
			for(j = 1; j <= i; j++) printf("%c ", temp++);
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

