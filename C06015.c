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

void chu_hoa(char n[500]){
	int i, len = strlen(n);
	for(i = 0; i < len; i++){
		if(n[i] >= 'a' && n[i] <= 'z') n[i] -= 32;
	}
}

void bai_lam(){
	int a, i, j; scanf("%d", &a);
	char s1[500][500]; 
	
	for(i = 0; i < a; i++){
		scanf("\n");
		gets(s1[i]);
	}
	
	for(i = 0; i < a; i++){
		char n[500][500];
		char *p;
		int len = 0;
		for(p = strtok(s1[i], " "); p != NULL; p = strtok(NULL, " ")){
			dinh_dang(p);
			strcpy(n[len++], trim(p));
		}
		
		char kq[500] = {};
		char temp[2] = {',', ','};
		char temp2[2] = {' ', ' '};
		for(j = 1; j < len; j++){
			strcat(kq, n[j]);
			if(j != len - 1) strncat(kq, temp2, 1);
		}
		chu_hoa(n[0]);
		strncat(kq, temp, 1); strncat(kq, temp2, 1); 
		strcat(kq, n[0]); 
		puts(kq);
	}
}

int main(){
	bai_lam();
	return 0;
}
