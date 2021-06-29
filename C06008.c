#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void xoa_tu(char n[100][50], int index, int size){
	int i, j;
	for(i = index; i < size - 1; i++){
		strcpy(n[i], n[i + 1]);
	}
}

void bai_lam(){
	char s1[101];
	gets(s1);
	
	char n[100][50];
	char *token;
	const char *delim = " ";
	
	// tach cac tu roi luu vao mang 2 chieu n
	int i, j, len = 0;
	for(token = strtok(s1,delim); token != NULL; token = strtok(NULL, delim)){
		strcpy(n[len++], token);
	}
	
	for(i = 0; i < len - 1; i++){
		for(j = i + 1; j < len; j++){
			if(strcmp(n[i], n[j]) == 0){
				xoa_tu(n, j, len);
				len--;
			}
		}
	}
	
	for(i = 0; i < len; i++){
		printf("%s ", n[i]);
	}
}

int main(){
	bai_lam();
}
