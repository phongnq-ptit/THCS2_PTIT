#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int a,b,c; 
	scanf("%d%d%d", &a, &b, &c);
	int min = (a > b) ? b : a;
	min = (min > c) ? c : min;
	printf("%d", min);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

