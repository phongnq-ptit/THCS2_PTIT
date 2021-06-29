#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	getchar();
	char n[500];
	gets(n); 
	int dem = 0, i;
	for(i = 1; i < strlen(n); i++){
		if((int) n[i - 1] == (int) ' ' && (int) n[i] !=(int) ' ') dem++;
	}
	printf("%d\n", dem + 1);
}

int main(){
	int a; scanf("%d", &a); 
	while(a--){
		bai_lam();
	}
	return 0;
}

