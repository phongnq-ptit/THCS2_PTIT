#include<stdio.h>
#include<math.h>

void bai_lam(){
	int n; 
	scanf("%d", &n);
	printf("%.2f", (float) n*9/5 + 32);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

