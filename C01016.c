#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n, i;
	scanf("%d", &n);
	for(i = 1; i < 11; i++){
		printf("%d ", n*i);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

