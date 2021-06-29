#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void bai_lam(){
	char n[200];
	gets(n);
	int i, len = strlen(n), chu = 0, so = 0, kytu = 0;
	for(i = 0; i < len; i++){
		if(isalpha((int) n[i])) chu++;
		else if(isdigit((int) n[i])) so++;
		else kytu++;
	}
	printf("%d %d %d", chu, so, kytu);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

