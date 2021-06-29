#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	getchar();
	char n;
	n = getchar();
	
	char kq;
	if((int) n >= 65 && (int) n <= 91) kq = (int) n + 32;
	else if((int) n >= 97 && (int) n <= 123) kq = (int) n - 32;
	
	printf("%c\n", (char) kq);
}

int main(){
	int a; scanf("%d", &a); 
	while(a--){
		bai_lam();
	}
	return 0;
}

