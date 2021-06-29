#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sap_xep(char n[555][555], int size){
	int i, j;
	for(i = 0; i < size - 1; i++){
		for(j = i + 1; j < size; j++){
			if(strcmp(n[i], n[j]) > 0){
				char temp[555] = {};
				strcpy(temp, n[i]);
				strcpy(n[i], n[j]);
				strcpy(n[j], temp);
			}
		}
	}
}

void xoa_tu_trung(char n[555][555], int len, int index){
	int i;
	for(i = index; i < len - 1; i++){
		strcpy(n[i], n[i + 1]);
	}
}

void bai_lam(){
	scanf("\n");
	char s1[555], s2[555];
	gets(s1); scanf("\n"); gets(s2);
	
	char n1[555][555], n2[555][555], kq[555][555];
	char *token1, *token2;
	
	int i, j, k, len1 = 0, len2 = 0, len3 = 0;
	// tach cac tu s1 roi luu vao mang 2 chieu n1
	for(token1 = strtok(s1," "); token1 != NULL; token1 = strtok(NULL, " ")){
		strcpy(n1[len1++], token1);
	}
	
	// sap xep theo tu dien
	sap_xep(n1, len1);
	
	// tach cac tu s2 roi luu vao mang 2 chieu n2
	for(token2 = strtok(s2," "); token2 != NULL; token2 = strtok(NULL, " ")){
		strcpy(n2[len2++], token2);
	}
	
	// xoa cac tu trung nhau trong n1
	for(i = 1; i < len1; i++){
		if(strcmp(n1[i - 1], n1[i]) == 0){
			xoa_tu_trung(n1, len1, i);
			len1--;
			i--;
		}
	}
	
	for(i = 0; i < len1; i++){
		int check = 1;
		for(j = 0; j < len2; j++){
			if(strcmp(n1[i], n2[j]) == 0){
				check = 0;
				break;
			}
		}
		if(check) strcpy(kq[len3++], n1[i]);
	}
	
	for(i = 0; i < len3; i++){
		printf("%s ", kq[i]);
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
