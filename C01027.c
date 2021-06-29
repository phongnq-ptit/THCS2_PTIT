#include<stdio.h>
#include<math.h>
#include<string.h>

int ucln(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

void bai_lam(){
	int a,b,i;
	scanf("%d%d",&a, &b);
	printf("%d\n", ucln(a,b));
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

