#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// loai bo khoang trang o 2 dau
char* trim (char s[]){
    int i = 0, len = strlen(s);
    while (s[len - 1]== ' ') len--; // loai bo khoang trang o ben trai
    s[len] = 0 ;
    while (*s == ' ') s++; // loai bo khoang trang o ben phai
    return s;
}

void chu_thuong(char n[100]){
	int i, len = strlen(n);
	for(i = 0; i < len; i++){
		if((int) n[i] >= 65 && (int) n[i] <= 91)
			n[i] += 32;
	}
}

void bai_lam(){
	char s[1000]; gets(s);
	
	char *p;
	char n[100][100];
	
	int i, j, k, len;
	for(p = strtok(s, " "); p != NULL; p = strtok(NULL, " ")){
		chu_thuong(p); // chuyen sang dang chu thuong
		strcpy(n[len++], trim(p));
	}
	
	for(i = 0; i < len - 1; i++){
		printf("%c", n[i][0]);
	}
	printf("%s@ptit.edu.vn", n[len - 1]);
}

int main(){
	bai_lam();
	return 0;
}
