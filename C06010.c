#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(char n[600], int len){
	int i;
	for(i = 0; i <= (len - 1)/2; i++){
		int temp = (int) n[i] - 48;
		if(temp % 2 != 0) return 0;
		if(n[i] != n[len - i - 1]) return 0; 
	} 
	return 1;
}

void bai_lam(){
	char n[600];
	gets(n);
	int len = strlen(n);
	
	if(kiem_tra(n, len)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a); getchar();
	while(a--){
		bai_lam();
	}
	return 0;
}

