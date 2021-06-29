#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n;
	scanf("%d", &n);
	int nam = n/365; n -= nam*365;
	int tuan = n/7; n -= tuan*7;
	printf("%d %d %d", nam, tuan, n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

