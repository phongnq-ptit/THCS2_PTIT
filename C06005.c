#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
		strcpy(n[len++], p);
	}
	
	int danh_dau[len]; memset(danh_dau, 0, sizeof(danh_dau));
	int xuat_hien[len]; memset(xuat_hien, 1, sizeof(xuat_hien));
	
	for(i = 0; i < len - 1; i++){
		int dem = 1;
		if(danh_dau[i]) continue;
		danh_dau[i] = 1;
		for(j = i + 1; j < len; j++){
			if(strcmp(n[i], n[j]) == 0 && danh_dau[j] == 0) {
				dem++;
				danh_dau[j] = 1;
				xuat_hien[j] = 0;
			}
		}
		if(xuat_hien[i]){
			printf("%s %d\n", n[i], dem);
			xuat_hien[i] = 0;
		}
	}
	if(danh_dau[len - 1] == 0) printf("%s %d\n", n[len - 1], 1);
}

int main(){
	bai_lam();
	return 0;
}
