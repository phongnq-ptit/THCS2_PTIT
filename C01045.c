#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	char n[200];
	gets(n);
	printf("%c %c", n[0], n[strlen(n) - 1]);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

