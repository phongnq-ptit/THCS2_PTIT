#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int a;
	scanf("%d", &a);
	if(a%2 == 0) printf("CHAN\n");
	else printf("LE\n");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

