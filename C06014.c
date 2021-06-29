#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// loai bo khoang trang o 2 dau
char* trim(char n[500]){
	int len = strlen(n);
	while(n[len - 1] == ' ') len--; // xoa khoang trang ben phai
	n[len] = 0;
	while(*n == ' ') n++; // xoa khoang trang ben trai
	return n;
}

void dinh_dang(char n[500]){
	int i, len = strlen(n);
	if(n[0] >= 'a' && n[0] <= 'z') n[0] -= 32;
	for(i = 1; i < len; i++){
		if((int) n[i] >= 65 && (int) n[i] <= 91)
			n[i] += 32;
	}
}

void bai_lam(){
	scanf("\n"); 
	int s1[500]; gets(s1);
	
	char n[500][500];
	char *p;
	int i, j, len = 0;
	for(p = strtok(s1, " "); p != NULL; p = strtok(NULL, " ")){
		dinh_dang(p);
		strcpy(n[len++], trim(p));
	}
	
	for(i = 0; i < len; i++){
		printf("%s ", n[i]);
	}
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
