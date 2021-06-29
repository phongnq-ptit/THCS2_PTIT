#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	char n[101];
	gets(n);
	char *token;
	const char *delim = " ";
	for(token = strtok(n, delim); token != NULL; token = strtok(NULL, delim)){
		puts(token);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

