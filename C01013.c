#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int a,b,c;
	scanf("%d + %d = %d", &a, &b, &c);
	if(a + b == c) printf("YES\n");
	else printf("NO\n");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

