#include<stdio.h>
#include<math.h>

void bai_lam(){
	int a,b; 
	scanf("%d%d", &a, &b);
	if(a <= 0 || b <= 0){
		printf("%d", 0);
		return;
	}
	printf("%d %d", (a + b)*2, a*b);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

