#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	char n[200];
	int i;
	gets(n);
	int len = strlen(n);
	
	char temp = n[0];
	n[0] = n[len - 1];
	n[len - 1] = temp;
	
	if(n[0] == '0'){
		for(i = 1; i < len; i++){
			printf("%c", n[i]);
		}	
	} else puts(n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

