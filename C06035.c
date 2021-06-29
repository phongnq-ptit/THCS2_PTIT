#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(char n[21], int len){
	int i, dem = 0;
	for(i = 0; i < len/2; i++){
		if(n[i] != n[len - i - 1]) dem++;
		if(dem > 1) return 0;
	}
	if(len%2 == 0 && dem == 0) return 0;
	return 1;
}

void bai_lam(){
	char n[21];
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

