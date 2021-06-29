#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int a,b,c,d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(abs(c - a) == abs(d - b)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

