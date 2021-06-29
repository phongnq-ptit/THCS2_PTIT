#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	char a[20];
	scanf("%s", &a); fflush(stdin);
	int i, index1 = -1, index2 = -1;
	for(i = 0; i <= strlen(a) - 3; i++){
		if(a[i] == '0' && a[i + 1] == '8' && a[i + 2] == '4'){
			index1 = i;
			index2 = i + 3;
		}
	}
	for(i = 0; i < index1; i++) printf("%c", a[i]);
	for(i = index2; i < strlen(a); i++) printf("%c", a[i]);
	printf("\n");
}

int main(){
	int a; scanf("%d", &a); fflush(stdin);
	while(a--){
		bai_lam();
	}
	return 0;
}

