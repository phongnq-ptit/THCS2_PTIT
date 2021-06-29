#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	
	int len = 1;
	for(i = 1; i <= n; i++){
		char temp = 64;
		for(j = 1; j <= len; j++){
			if(j - i >= 0){
				printf("%c", temp);
				temp -= 2;
			} else{
				printf("%c", temp);
				temp += 2;
			}
		}
		printf("\n");
		len += 2;
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

