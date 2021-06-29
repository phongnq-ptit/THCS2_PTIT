#include<stdio.h>
#include<string.h>

void xoa_tu(char n[101], int index, int len){
	int i, size = strlen(n);
	for(i = index; i <= size - len; i++){
		n[i] = n[i + len + 1];
	}
}

void bai_lam(){
	char s1[101], s2[101];
	gets(s1); scanf("\n"); gets(s2);
	
	int i, len = strlen(s2);
	for(i = 0; s1[i] != '\0'; i++){
		if(strstr(&s1[i], s2) == &s1[i]){
			xoa_tu(s1, i, len);
			i--;
		}
	}
	
	printf("%s", s1);
}

int main(){
	bai_lam();
}
