#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		int chan = 2, le = 1;
		if(i % 2 == 0){
			for(j = 1; j <= i; j++){
				printf("%d",chan);
				chan += 2;
			}
		} else{
			for(j = 1; j <= i; j++){
				printf("%d",le);
				le += 2;
			}
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

