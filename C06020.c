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
	int a; scanf("%d", &a);
	int i, j, k, size = 0;
	char s[a][55];
	
	for(i = 0; i < a; i++){
		scanf("\n");
		gets(s[i]);
	}
	
	char kq[a][55]; // luu cac ten da duoc chuan hoa
	
	for(i = 0; i < a; i++){
		
		char temp[55][55];
		char *p;
		int len = 0;
		
		// tach cac tu ra khoi chuoi
		for(p = strtok(s[i], " "); p != NULL; p = strtok(NULL, " ")){
			chu_thuong(p);
			strcpy(temp[len++], trim(p));
		}
		
		strcpy(kq[i], temp[len - 1]);
		for(k = 0; k < len - 1; k++) strncat(kq[i], temp[k], 1);
	}
	
	// chuan hoa nhung email trung nhau
	int danh_dau[a]; memset(danh_dau, 0, sizeof(danh_dau));
	for(i = 0; i < a - 1; i++){
		int dem = 1;
		if(danh_dau[i]) continue;
		danh_dau[i] = 1;
		for(j = i + 1; j < a; j++){
			if(strcmp(kq[i], kq[j]) == 0 && danh_dau[j] == 0){
				++dem;
				char c = 48 + dem;
				char temp[5] ={c,c,c,c,c};
				strncat(kq[j], temp, 1);
				danh_dau[j] = 1;
			}
		}
	}
	
	for(i = 0; i < a; i++){
		printf("%s@ptit.edu.vn\n", kq[i]);
	}
}

int main(){
	bai_lam();	
	return 0;
}
