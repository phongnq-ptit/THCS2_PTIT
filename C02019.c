#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j, len = 1;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		int temp = 2;
		for(j = 1; j <= len; j++){
			if(i - j <= 0){
				printf("%d", temp);
				temp -= 2;
			} else{
				printf("%d", temp);
				temp += 2;
			}
		}
		len += 2;
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

