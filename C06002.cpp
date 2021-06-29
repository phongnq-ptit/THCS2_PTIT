#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void bai_lam(){
	char n[200];
	gets(n);
	int i;
	for(i = 0; i < strlen(n); i++){
		if(n[i] >= 'a' && n[i] <= 'z') n[i] -= 32;
	}
	puts(n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

