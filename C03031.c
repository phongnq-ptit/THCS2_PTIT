#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int ucln(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

void bai_lam(){
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(ucln(a,b) == ucln(c,d)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

