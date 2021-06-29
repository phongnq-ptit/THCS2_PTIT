#include<stdio.h>
#include<string.h>

void bai_lam(){
	char s1[101], s2[101], kq[202];
	gets(s1); fflush(stdin); gets(s2);
	int k,i; scanf("%d", &k);
	
	for(i = 0; i < k - 1; i++)
		printf("%c", s1[i]);
	
	//printf("%c", s2[0]);
	for(i = 0; i < strlen(s2); i++)
		printf("%c", s2[i]);
		
	for(i = k - 1; i < strlen(s1); i++)
		printf("%c", s1[i]);

}

int main(){
	bai_lam();
	return 0;
}
