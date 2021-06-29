#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void chu_thuong(char n[500]){
	int i, len = strlen(n);
	for(i = 0; i < len; i++){
		if((int) n[i] >= 65 && (int) n[i] <= 91)
			n[i] += 32;
	}
}

int test = 1;
void bai_lam(){
	int s1[500], s2[500];
	scanf("\n"); gets(s1); scanf("\n"); gets(s2);
	
	chu_thuong(s2);
	char n[500][500], copy[500][500];
	char *p;
	int i, j, len = 0, len2 = 0;
	for(p = strtok(s1," "); p != NULL; p = strtok(NULL," ")){
		strcpy(n[len++], p);
		chu_thuong(p);
		strcpy(copy[len2++], p);
	}
	
	char kq[500] = {}; 
	char temp[2] = {' ',' '};
	for(i = 0; i < len2; i++){
		if(strcmp(copy[i], s2) != 0){
			strcat(kq, n[i]);
			strncat(kq, temp, 1);
		}
	}
	
	printf("Test %d: ", test++);
	puts(kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
